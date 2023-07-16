#include "homescene.h"
#include "ui_homescene.h"
#include "roomscene.h"

HomeScene::HomeScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeScene)
{
    ui->setupUi(this);

//    connect(ui->playNowBtn, SIGNAL(clicked()), this, SLOT(on_playNowBtn_clicked()));
//    connect(ui->createRoomBtn, SIGNAL(clicked()), this, SLOT(on_createRoomBtn_clicked()));
//    connect(ui->rankBtn, &QPushButton::clicked, this, &HomeScene::onViewRankClicked);

}

HomeScene::~HomeScene()
{
    delete ui;
}

void HomeScene::on_createRoomBtn_clicked()
{
    CreateRoomDialog* createRoomDialog = new CreateRoomDialog();
    createRoomDialog->exec();
    this->clientCore->createRoom(createRoomDialog->getRoomname());
    RoomScene* roomScene = new RoomScene();
    roomScene->on_roomname_linkActivated(createRoomDialog->getRoomname());
    roomScene->on_label_linkActivated(this->ui->label_2->text());
    roomScene->on_label_2_linkActivated(this->ui->label_3->text());
    if(this->ui->label_3->text().contains("Bronze")) {
        roomScene->on_level_linkActivated("Level: Bronze");
    }
    else if(this->ui->label_3->text().contains("Silver")) {
        roomScene->on_level_linkActivated("Level: Silver");
    }
    else {
        roomScene->on_level_linkActivated("Level: Gold");
    }
    roomScene->getListUser().append(QPair<QString, QString>(this->ui->label_2->text(), this->ui->label_3->text().trimmed()));
    roomScene->addPlayer(roomScene->createVerticalUser(this->ui->label_2->text(), this->ui->label_3->text().trimmed()), roomScene->getRow(), roomScene->getCollumn());
    roomScene->setCollumn(1);
    roomScene->setClientCore(this->clientCore);
    roomScene->connectSignal();
    roomScene->show();
    close();
}

Ui::HomeScene *HomeScene::getUi() const
{
    return ui;
}

void HomeScene::setUi(Ui::HomeScene *newUi)
{
    ui = newUi;
}

void HomeScene::on_label_2_linkActivated(const QString &link)
{
    this->ui->label_2->setText(link);
}


void HomeScene::on_label_3_linkActivated(const QString &link)
{
    this->ui->label_3->setText(link);
}

ClientCore *HomeScene::getClientCore() const
{
    return clientCore;
}

void HomeScene::setClientCore(ClientCore *newClientCore)
{
    clientCore = newClientCore;
}

void HomeScene::on_findRoomBtn_clicked()
{
    clientCore->findRoom();
    connect(clientCore, &ClientCore::Finished, this, &HomeScene::handleFindRoomResponse);
}

void HomeScene::handleFindRoomResponse(const QJsonDocument &response)
{
    QList<quint64> ids;
    QList<QString> roomnames;
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();
        if (jsonObject.contains("command_code") && jsonObject["command_code"].isString()) {
            if(jsonObject["command_code"].toString().compare("FINDROOM")!=0) return;
        }
        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            if (infoObject.contains("id") && infoObject["id"].isArray()) {
                QJsonArray idArray = infoObject.value("id").toArray();
                for (const QJsonValue& value : idArray) {
                    ids.append(value.toInt());
                }
            }
            if(infoObject.contains("roomname") && infoObject["roomname"].isArray()) {
                QJsonArray roomnamesArray = infoObject.value("roomname").toArray();
                for (const QJsonValue& value : roomnamesArray) {
                    roomnames.append(value.toString());
                }
            }
        }
    }
    ListRoomScene* listRoomScene = new ListRoomScene();
    listRoomScene->on_label_2_linkActivated(this->ui->label_2->text());
    listRoomScene->on_label_3_linkActivated(this->ui->label_3->text());
    listRoomScene->setUsername(this->ui->label_2->text().trimmed());
    listRoomScene->setRoomIds(ids);
    listRoomScene->setRoomnames(roomnames);
    listRoomScene->setupLayout();
    listRoomScene->setClientCore(this->clientCore);
    this->disconnectSignal();
    listRoomScene->show();
    close();
}

void HomeScene::on_rankBtn_clicked()
{
    clientCore->viewRank();
    connect(clientCore, &ClientCore::Finished, this, &HomeScene::handleViewRankResponse);
}

void HomeScene::handleViewRankResponse(const QJsonDocument &response)
{
    QList<quint64> ids;
    QList<QString> usernames;
    QList<quint64> ranked;
    QList<quint64> rankScore;
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();

        if (jsonObject.contains("command_code") && jsonObject["command_code"].isString()) {
            if(jsonObject["command_code"].toString().compare("VIEWRANK")!=0) return;
        }

        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            if (infoObject.contains("id") && infoObject["id"].isArray()) {
                QJsonArray idArray = infoObject.value("id").toArray();
                for (const QJsonValue& value : idArray) {
                    ids.append(value.toInt());
                }
            }

            if(infoObject.contains("username") && infoObject["username"].isArray()) {
                QJsonArray usernamesArray = infoObject.value("username").toArray();
                for (const QJsonValue& value : usernamesArray) {
                    usernames.append(value.toString());
                }
            }

            if(infoObject.contains("ranked") && infoObject["ranked"].isArray()) {
                QJsonArray rankedArray = infoObject.value("ranked").toArray();
                for (const QJsonValue& value : rankedArray) {
                    ranked.append(value.toInt());
                }
            }

            if(infoObject.contains("rankScore") && infoObject["rankScore"].isArray()) {
                QJsonArray rankScoreArray = infoObject.value("rankScore").toArray();
                for (const QJsonValue& value : rankScoreArray) {
                    rankScore.append(value.toInt());
                }
            }
        }
    }

    RankScene* rankScene = new RankScene();
    rankScene->setUserIds(ids);
    rankScene->setUsernames(usernames);
    rankScene->setRanked(ranked);
    rankScene->setRankScore(rankScore);
    rankScene->on_label_3_linkActivated(this->ui->label_2->text());
    rankScene->on_label_5_linkActivated(this->ui->label_3->text());
    rankScene->setupList();
    rankScene->setClientCore(this->clientCore);
    this->disconnectSignal();
    rankScene->show();
    this->close();
}

void HomeScene::on_quitBtn_clicked()
{
    close();
}


void HomeScene::on_signOutBtn_clicked()
{
    MainWindow w = MainWindow();
    w.setClientCore(this->clientCore);
    w.show();
    close();
}

void HomeScene::on_history_clicked()
{
    this->clientCore->viewHistory();
    connect(clientCore, &ClientCore::Finished, this, &HomeScene::handleViewHistoryResponse);
}

void HomeScene::handleViewHistoryResponse(const QJsonDocument &response)
{
    QList<quint64> tops;
    QList<quint64> scores;
    QList<QString> startgames;
    QList<QString> endgames;
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();

        if (jsonObject.contains("command_code") && jsonObject["command_code"].isString()) {
            if(jsonObject["command_code"].toString().compare("VIEWHISTORY")!=0) return;
        }
        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            if (infoObject.contains("top") && infoObject["top"].isArray()) {
                QJsonArray topArray = infoObject.value("top").toArray();
                for (const QJsonValue& value : topArray) {
                    tops.append(value.toInt());
                }
            }

            if(infoObject.contains("score") && infoObject["score"].isArray()) {
                QJsonArray scoreArray = infoObject.value("score").toArray();
                for (const QJsonValue& value : scoreArray) {
                    scores.append(value.toInt());
                }
            }

            if(infoObject.contains("startgame") && infoObject["startgame"].isArray()) {
                QJsonArray startgameArray = infoObject.value("startgame").toArray();
                for (const QJsonValue& value : startgameArray) {
                    startgames.append(value.toString());
                }
            }

            if(infoObject.contains("endgame") && infoObject["endgame"].isArray()) {
                QJsonArray endgameArray = infoObject.value("endgame").toArray();
                for (const QJsonValue& value : endgameArray) {
                    endgames.append(value.toString());
                }
            }
        }
    }
    HistoryScene* historyScene = new HistoryScene();
    historyScene->setTops(tops);
    historyScene->setScores(scores);
    historyScene->setStartgames(startgames);
    historyScene->setEndgames(endgames);
    historyScene->on_name_linkActivated(this->ui->label_2->text());
    historyScene->on_rank_linkActivated(this->ui->label_3->text());
    historyScene->setupList();
    historyScene->setClientCore(this->clientCore);
    this->disconnectSignal();
    historyScene->show();
    this->close();
}

void HomeScene::disconnectSignal()
{
    disconnect(clientCore, &ClientCore::Finished, this, &HomeScene::handleFindRoomResponse);
    disconnect(clientCore, &ClientCore::Finished, this, &HomeScene::handleViewHistoryResponse);
    disconnect(clientCore, &ClientCore::Finished, this, &HomeScene::handleViewRankResponse);
}

