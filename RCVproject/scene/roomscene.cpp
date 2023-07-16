#include "roomscene.h"
#include "ui_roomscene.h"

RoomScene::RoomScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RoomScene)
{
    ui->setupUi(this);
    this->row = 0;
    this->collumn = 0;
    this->ui->gridLayout_2->setSpacing(20);
}

RoomScene::~RoomScene()
{
    delete ui;
}

Ui::RoomScene *RoomScene::getUi() const
{
    return ui;
}

void RoomScene::setUi(Ui::RoomScene *newUi)
{
    ui = newUi;
}

void RoomScene::on_label_linkActivated(const QString &link)
{
    this->ui->label->setText(link);
}


void RoomScene::on_label_2_linkActivated(const QString &link)
{
    this->ui->label_2->setText(link);
}


void RoomScene::on_roomname_linkActivated(const QString &link)
{
    this->ui->roomname->setText(link);
}

QWidget *RoomScene::createVerticalUser(QString username, QString rank)
{
    // Tạo widget và layout dọc
    QWidget* widget = new QWidget;
    QVBoxLayout* layout = new QVBoxLayout(widget);

    widget->setStyleSheet("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;");
    // Thêm các phần tử vào layout
    QLabel* labelImage = new QLabel();
    QLabel* labelName = new QLabel(username);
    QLabel* labelRank = new QLabel(rank);

    QPixmap pixmap(":/images/icons8-student-64.png");
    labelImage->setStyleSheet("background-color: #b8b8b8;"
                             "border: 2px solid black;"
                             "border-radius: 10px;");
    labelImage->setPixmap(pixmap);

    labelName->setStyleSheet("background-color: #b8b8b8;"
                        "border: 2px solid black;"
                        "border-radius: 10px;");
    QFont fontName("VNI-Duff", 12);

    labelName->setFont(fontName);

    QFont fontRank("VNI-Chancery", 12);
    labelRank->setStyleSheet("background-color: #b8b8b8;"
                            "border: 2px solid black;"
                            "border-radius: 10px;");
    labelRank->setFont(fontRank);
    layout->addWidget(labelImage);
    layout->addWidget(labelName);
    layout->addWidget(labelRank);

    // Thiết lập layout cho widget
    widget->setLayout(layout);

    return widget;
}

void RoomScene::addPlayer(QWidget *verticalUser, quint64 row, quint64 column)
{
    this->ui->gridLayout_2->addWidget(verticalUser, row, column);
}

QList<QPair<QString, QString> > RoomScene::getListUser() const
{
    return listUser;
}

void RoomScene::setListUser(const QList<QPair<QString, QString> > &newListUser)
{
    listUser = newListUser;
}


void RoomScene::on_level_linkActivated(const QString &link)
{
    this->ui->level->setText(link);
}


void RoomScene::on_playBtn_clicked()
{
    clientCore->startGame(this->noQuestion);
}

void RoomScene::handlePlayResponse(const QJsonDocument &response)
{
    QList<QPair<QString, QList<QPair<QString, quint64>>>> questions;

    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();
        if (jsonObject.contains("command_code") && jsonObject["command_code"].isString()) {
            if(jsonObject["command_code"].toString().compare("STARTGAME")!=0) return;
        }
        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            if (infoObject.contains("question") && infoObject["question"].isArray()) {
                QJsonArray questionsArray = infoObject.value("question").toArray();

                for (int i = 0; i < questionsArray.size(); ++i) {
                    QPair<QString, QList<QPair<QString, quint64>>> question;
                    QList<QPair<QString, quint64>> answers;
                    QJsonObject questionObject = questionsArray.at(i).toObject();
                    QString content = questionObject.value("content").toString();
                    question.first = content;
                    QJsonArray answerArray = questionObject.value("answer").toArray();

                    for (int j = 0; j < answerArray.size(); j++) {
                        QPair<QString, quint64> answer;
                        QJsonObject answerObject = answerArray.at(j).toObject();
                        QString answerContent = answerObject.value("content").toString();
                        QString resultStr = answerObject.value("result").toString();
                        quint64 result = resultStr.toInt();
                        answer.first = answerContent;
                        answer.second = result;
                        answers.append(answer);
                    }
                    question.second = answers;
                    questions.append(question);
                }
            }
        }
    }
    GameScene* gameScene = new GameScene();
    gameScene->on_name_linkActivated(this->ui->label->text());
    gameScene->on_rank_linkActivated(this->ui->label_2->text());
    gameScene->on_level_linkActivated(this->ui->level->text());
    gameScene->on_roomname_linkActivated(this->ui->roomname->text());
    gameScene->setQuestions(questions);
    gameScene->setRemainQuestion(gameScene->getQuestions().size());
    gameScene->on_remainQuestion_linkActivated(QString::number(gameScene->getQuestions().size()));
    gameScene->setupClock();
    gameScene->setupList();
    this->disconnectSignal();
    gameScene->setClientcore(this->clientCore);
    gameScene->show();
    close();
}

void RoomScene::handleJoinRoomResponse(const QJsonDocument &response)
{
    QString username;
    QString userIdStr;
    QString rankStr;
    quint64 userId;
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();
        if (jsonObject.contains("command_code") && jsonObject["command_code"].isString()) {
            if(jsonObject["command_code"].toString().compare("REQUESTJOINROOM")!=0) return;
        }
        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            // Lấy giá trị của key "username" từ QJsonObject "infoObject"
            if (infoObject.contains("username") && infoObject["username"].isString()) {
                username = infoObject["username"].toString();
            }

            if (infoObject.contains("userId") && infoObject["userId"].isString()) {
                userIdStr = infoObject["userId"].toString();
                userId = userIdStr.toInt();
            }

            if (infoObject.contains("rankScore") && infoObject["rankScore"].isString()) {
                rankStr = infoObject["rankScore"].toString();
            }
        }
    }
    QString cnt = username + " have id " + userIdStr + " want to join room";
    qDebug() << cnt;
    createDialog(cnt, username, rankStr, userId);
}

void RoomScene::createDialog(QString content, QString username, QString rankStr, quint64 userId)
{
    // Tạo dialog
    QDialog dialog;
    dialog.setWindowTitle("Dialog");

    // Thiết lập kích thước dialog
    dialog.setFixedSize(300, 200);

    // Tạo layout chính
    QVBoxLayout layout(&dialog);

    // Tạo nhãn chứa nội dung
    QLabel label(content);
    label.setAlignment(Qt::AlignCenter);

    QFont font("Segoe UI Variable Text Semibold", 15);
    label.setFont(font);

    // Thiết lập kích thước cho nhãn
    label.setFixedSize(200, 100);

    // Tạo nút Accept
    QPushButton acceptButton("Accept");
    acceptButton.setFixedSize(80, 30);

    // Tạo nút Deny
    QPushButton denyButton("Deny");
    denyButton.setFixedSize(80, 30);

    // Kết nối sự kiện clicked của nút Accept
    QObject::connect(&acceptButton, &QPushButton::clicked, &dialog, &QDialog::accept);

    // Kết nối sự kiện clicked của nút Deny
    QObject::connect(&denyButton, &QPushButton::clicked, &dialog, &QDialog::reject);

    // Thiết lập kích thước cho layout
    layout.setSizeConstraint(QLayout::SetFixedSize);

    // Thêm các phần tử vào layout
    layout.addWidget(&label, 0, Qt::AlignCenter);
    layout.addWidget(&acceptButton, 0, Qt::AlignCenter);
    layout.addWidget(&denyButton, 0, Qt::AlignCenter);
    // Hiển thị dialog
    dialog.setLayout(&layout);
    int result = dialog.exec();

    // Kiểm tra kết quả từ dialog
    if (result == QDialog::Accepted) {
        if(this->ui->label_2->text().contains("Bronze")) {
            rankStr = "Bronze: " + rankStr;
        }
        else if(this->ui->label_2->text().contains("Silver")) {
            rankStr = "Silver: " + rankStr;
        }
        else if(this->ui->label_2->text().contains("Gold")) {
            rankStr = "Gold: " + rankStr;
        }
        accept(username, rankStr, userId);
        qDebug() << "Dialog accepted";
    }
    else if (result == QDialog::Rejected) {
        deny(userId);
        qDebug() << "Dialog rejected";
    }
}

void RoomScene::setupLayout()
{
    qDebug() << this->usernames.size();
    qDebug() << this->rankscore.size();
    for(int i=0; i<this->usernames.size(); i++) {
        this->addPlayer(this->createVerticalUser(this->usernames.at(i), this->rankscore.at(i)), row, collumn);
        if(collumn==4) {
            collumn = 0;
            row++;
        }
        else {
            collumn++;
        }
    }
}

void RoomScene::accept(QString username, QString rankStr, quint64 userId)
{
    this->addPlayer(this->createVerticalUser(username, rankStr), row, collumn);
    if(collumn == 4) {
        row++;
        collumn=0;
    }
    else {
        collumn++;
    }
    clientCore->responseJoinRoom(userId, 1);
}

void RoomScene::deny(quint64 userId)
{
    clientCore->responseJoinRoom(userId, 0);
}

void RoomScene::disablePlayButton()
{
    this->ui->playBtn->setDisabled(true);
}

void RoomScene::connectSignal()
{
    connect(clientCore, &ClientCore::Finished, this, &RoomScene::handleJoinRoomResponse);
    connect(clientCore, &ClientCore::Finished, this, &RoomScene::handlePlayResponse);
    connect(clientCore, &ClientCore::Finished, this, &RoomScene::handelAcceptJoinRoomResponse);
}

void RoomScene::disconnectSignal()
{
    disconnect(clientCore, &ClientCore::Finished, this, &RoomScene::handleJoinRoomResponse);
    disconnect(clientCore, &ClientCore::Finished, this, &RoomScene::handlePlayResponse);
    disconnect(clientCore, &ClientCore::Finished, this, &RoomScene::handelAcceptJoinRoomResponse);
}

void RoomScene::handelAcceptJoinRoomResponse(const QJsonDocument &response)
{
    QString username;
    QString rankStr;
    qDebug() << "room scene response join";
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();
        if (jsonObject.contains("command_code") && jsonObject["command_code"].isString()) {
            if(jsonObject["command_code"].toString().compare("ACCEPTJOINROOM")!=0) return;
        }
        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            // Lấy giá trị của key "username" từ QJsonObject "infoObject"
            if (infoObject.contains("username") && infoObject["username"].isString()) {
                username = infoObject["username"].toString();
            }

            if (infoObject.contains("rankScore") && infoObject["rankScore"].isString()) {
                rankStr = infoObject["rankScore"].toString();
            }
        }
    }

    if(this->ui->label_2->text().contains("Bronze")) {
        rankStr = "Bronze: " + rankStr;
    }
    else if(this->ui->label_2->text().contains("Silver")) {
        rankStr = "Silver: " + rankStr;
    }
    else if(this->ui->label_2->text().contains("Gold")) {
        rankStr = "Gold: " + rankStr;
    }

    addPlayer(createVerticalUser(username, rankStr), row, collumn);
    if(collumn == 4) {
        row++;
        collumn=0;
    }
    else {
        collumn++;
    }
}

QList<QString> RoomScene::getRankscore() const
{
    return rankscore;
}

void RoomScene::setRankscore(const QList<QString> &newRankscore)
{
    rankscore = newRankscore;
}

QList<QString> RoomScene::getUsernames() const
{
    return usernames;
}

void RoomScene::setUsernames(const QList<QString> &newUsernames)
{
    usernames = newUsernames;
}

void RoomScene::setCollumn(int newCollumn)
{
    collumn = newCollumn;
}

void RoomScene::setRow(int newRow)
{
    row = newRow;
}

int RoomScene::getCollumn() const
{
    return collumn;
}

int RoomScene::getRow() const
{
    return row;
}

ClientCore *RoomScene::getClientCore() const
{
    return clientCore;
}

void RoomScene::setClientCore(ClientCore *newClientCore)
{
    clientCore = newClientCore;
}

void RoomScene::on_spinBoxNo_valueChanged(int arg1)
{
    this->noQuestion = arg1;
}


void RoomScene::on_back_clicked()
{
    HomeScene* homeScene = new HomeScene();
    homeScene->on_label_2_linkActivated(this->ui->label->text());
    homeScene->on_label_3_linkActivated(this->ui->label_2->text());
    homeScene->setClientCore(this->clientCore);
    this->disconnectSignal();
    homeScene->show();
    close();
}

