#include "gamescene.h"
#include "ui_gamescene.h"

GameScene::GameScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameScene)
{
    this->score = 0;
    this->callCount = 0;
    resultButton.append(0);
    resultButton.append(0);
    resultButton.append(0);
    resultButton.append(0);

    ui->setupUi(this);
//    this->clientcore = ClientCore::getInstance();

    QTimer* timerClock = new QTimer(this);
    connect(timerClock, &QTimer::timeout, this, &GameScene::setupClock);
    timerClock->start(1000); // Gọi hàm timeout sau mỗi giây (1000ms)
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &GameScene::setupList);
    timer->start(11000); // Gọi myFunction sau mỗi 10000ms (10 giây)
    connect(this, &GameScene::checkFinish, this, &GameScene::finishGame);
}

GameScene::~GameScene()
{
    delete ui;
}

void GameScene::on_name_linkActivated(const QString &link)
{
    this->ui->name->setText(link);
}


void GameScene::on_rank_linkActivated(const QString &link)
{
    this->ui->rank->setText(link);
}

void GameScene::setupList()
{
    this->ui->pushButton->setDisabled(false);
    this->ui->pushButton_2->setDisabled(false);
    this->ui->pushButton_3->setDisabled(false);
    this->ui->pushButton_4->setDisabled(false);
    this->listButton = {this->ui->pushButton, this->ui->pushButton_2, this->ui->pushButton_3, this->ui->pushButton_4};

//    for(int i=0; i<this->questions.size(); i++)
//    {
    this->ui->label->setText(this->questions.at(callCount).first);
    QList<QPair<QString, quint64>> listAnswer;
    listAnswer = this->questions.at(callCount).second;
    for(int j=0; j<listAnswer.size(); j++) {
        QPushButton* button = listButton.at(j);
        button->setText(listAnswer.at(j).first);
        resultButton.replace(j, listAnswer.at(j).second);
    }
//    }

    callCount++;
    if (callCount == this->questions.size()) {
        // Đã đạt số lần gọi nhất định, dừng lại
        QTimer* timer = qobject_cast<QTimer*>(sender());
        if (timer) {
            timer->stop();
            QTimer* delayTimer = new QTimer(this);
            delayTimer->setSingleShot(true);
            connect(delayTimer, &QTimer::timeout, this, [=]() {
                qDebug() << "abc gamescene";
                emit checkFinish();
            });
            delayTimer->start(12000); // Đặt thời gian chờ là 12s
        }
    }
}

void GameScene::setupClock()
{
    if (time.second()>0) {
        this->ui->clock->setText(time.toString());
        time = time.addSecs(-1); // Giảm đi 1 giây
    }
    else {
        this->ui->clock->setText(time.toString());
        time.setHMS(0, 0, 10);
    }
}

void GameScene::finishGame()
{
    qDebug() << "score1: " << this->score;
    this->clientcore->finishGame(this->score);
    qDebug() << "score2: " << this->score;
    connect(clientcore, &ClientCore::Finished, this, &GameScene::handleFinishResponse);
}

void GameScene::handleFinishResponse(const QJsonDocument &response)
{
    QList<quint64> scores;
    QList<QString> usernames;
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();

        if (jsonObject.contains("command_code") && jsonObject["command_code"].isString()) {
            if(jsonObject["command_code"].toString().compare("FINISHGAME")!=0) return;
        }
        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            if (infoObject.contains("username") && infoObject["username"].isArray()) {
                QJsonArray userArray = infoObject.value("username").toArray();
                for (const QJsonValue& value : userArray) {
                    usernames.append(value.toString());
                }
            }

            if(infoObject.contains("score") && infoObject["score"].isArray()) {
                QJsonArray scoreArray = infoObject.value("score").toArray();
                for (const QJsonValue& value : scoreArray) {
                    scores.append(value.toInt());
                }
            }
        }
    }

    ResultScene* resultScene = new ResultScene();
    resultScene->on_name_linkActivated(this->ui->name->text());
    resultScene->on_rank_linkActivated(this->ui->rank->text());
    resultScene->setUsernames(usernames);
    resultScene->setScores(scores);
    resultScene->setupList();
    resultScene->setClientCore(this->clientcore);
    resultScene->show();
    close();
}

ClientCore *GameScene::getClientcore() const
{
    return clientcore;
}

void GameScene::setClientcore(ClientCore *newClientcore)
{
    clientcore = newClientcore;
}

quint64 GameScene::getRemainQuestion() const
{
    return remainQuestion;
}

void GameScene::setRemainQuestion(quint64 newRemainQuestion)
{
    remainQuestion = newRemainQuestion;
}

QList<QPair<QString, QList<QPair<QString, quint64> > > > GameScene::getQuestions() const
{
    return questions;
}

void GameScene::setQuestions(const QList<QPair<QString, QList<QPair<QString, quint64> > > > &newQuestions)
{
    questions = newQuestions;
}

void GameScene::on_pushButton_clicked()
{
    if(this->resultButton.at(0)==1) {
        this->score++;
        this->on_score_linkActivated(QString::number(this->score));
        QMessageBox::information(this, "Correct Answer", "Your answer is correct!");
    }
    else {
        QMessageBox::information(this, "Wrong Answer", "Your answer is wrong!");
    }
    this->disableButton();
}


void GameScene::on_pushButton_2_clicked()
{
    if(this->resultButton.at(1)==1) {
        this->score++;
        this->on_score_linkActivated(QString::number(this->score));
        QMessageBox::information(this, "Correct Answer", "Your answer is correct!");
    }
    else {
        QMessageBox::information(this, "Wrong Answer", "Your answer is wrong!");
    }
    this->disableButton();
}


void GameScene::on_pushButton_3_clicked()
{
    if(this->resultButton.at(2)==1) {
        this->score++;
        this->on_score_linkActivated(QString::number(this->score));
        QMessageBox::information(this, "Correct Answer", "Your answer is correct!");
    }
    else {
        QMessageBox::information(this, "Wrong Answer", "Your answer is wrong!");
    }
    this->disableButton();
}


void GameScene::on_pushButton_4_clicked()
{
    if(this->resultButton.at(3)==1) {
        this->score++;
        this->on_score_linkActivated(QString::number(this->score));
        QMessageBox::information(this, "Correct Answer", "Your answer is correct!");
    }
    else {
        QMessageBox::information(this, "Wrong Answer", "Your answer is wrong!");
    }
    this->disableButton();
}


void GameScene::on_remainQuestion_linkActivated(const QString &link)
{
    this->ui->remainQuestion->setText(link);
}

void GameScene::disableButton()
{
    this->on_remainQuestion_linkActivated(QString::number(this->remainQuestion - this->callCount));
    this->ui->pushButton->setDisabled(true);
    this->ui->pushButton_2->setDisabled(true);
    this->ui->pushButton_3->setDisabled(true);
    this->ui->pushButton_4->setDisabled(true);
}


void GameScene::on_level_linkActivated(const QString &link)
{
    this->ui->level->setText(link);
}

void GameScene::on_roomname_linkActivated(const QString &link)
{
    this->ui->roomname->setText(link);
}


void GameScene::on_score_linkActivated(const QString &link)
{
    this->ui->score->setText(link);
}

void GameScene::on_back_clicked()
{
    HomeScene* homeScene = new HomeScene();
    homeScene->setClientCore(this->clientcore);
    homeScene->on_label_2_linkActivated(this->ui->name->text());
    homeScene->on_label_3_linkActivated(this->ui->rank->text());
    homeScene->show();
    close();
}

