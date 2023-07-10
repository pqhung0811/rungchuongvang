#include "roomscene.h"
#include "ui_roomscene.h"

RoomScene::RoomScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RoomScene)
{
    ui->setupUi(this);
    clientCore = ClientCore::getInstance();
//    setStyleSheet("QWidget {background-image:url(D:/Networkprogramming/project/images/gold-frame.jpg)}");
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
    connect(clientCore, &ClientCore::Finished, this, &RoomScene::handlePlayResponse);
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
    gameScene->setupList();
    gameScene->show();
    close();
}


void RoomScene::on_spinBoxNo_valueChanged(int arg1)
{
    this->noQuestion = arg1;
}

