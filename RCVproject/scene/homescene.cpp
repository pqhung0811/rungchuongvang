#include "homescene.h"
#include "ui_homescene.h"
#include "roomscene.h"

HomeScene::HomeScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeScene)
{
    ui->setupUi(this);
    this->clientCore = ClientCore::getInstance();
//    this->clientManager = new clientManager();

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
//    this->clientManager->createroom(createRoomDialog->getRoomname());
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
    roomScene->addPlayer(roomScene->createVerticalUser(this->ui->label_2->text(), this->ui->label_3->text().trimmed()), 0, 0);
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

//ClientManager *HomeScene::getClientManager() const
//{
//    return clientManager;
//}

//void HomeScene::setClientManager(ClientManager *newClientManager)
//{
//    clientManager = newClientManager;
//}

void HomeScene::on_findRoomBtn_clicked()
{
    clientCore->findRoom();
    connect(clientCore, &ClientCore::Finished, this, &HomeScene::handleFindRoomResponse);
//    this->clientManager->findroom();
//    handleFindRoomResponse(this->clientManager->getJsonDoc());
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
    qDebug() << "size of id: " << ids.size();
    qDebug() << "size of name: " << roomnames.size();
    ListRoomScene* listRoomScene = new ListRoomScene();
    listRoomScene->on_label_2_linkActivated(this->ui->label_2->text());
    listRoomScene->on_label_3_linkActivated(this->ui->label_3->text());
    listRoomScene->setRoomIds(ids);
    listRoomScene->setRoomnames(roomnames);
    listRoomScene->setupList();
    listRoomScene->show();
    close();
}

void HomeScene::on_rankBtn_clicked()
//void HomeScene::onViewRankClicked()
{
    clientCore->viewRank();
//    this->clientManager->viewrank();
    connect(clientCore, &ClientCore::Finished, this, &HomeScene::handleViewRankResponse);
//    handleViewRankResponse(this->clientManager->getJsonDoc());
    this->close();
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
    qDebug() << "size of id: " << ids.size();
    qDebug() << "size of name: " << usernames.size();
    qDebug() << "size of ranked: " << ranked.size();

    RankScene* rankScene = new RankScene();
    rankScene->setUserIds(ids);
    rankScene->setUsernames(usernames);
    rankScene->setRanked(ranked);
    rankScene->setRankScore(rankScore);
    rankScene->on_label_3_linkActivated(this->ui->label_2->text());
    rankScene->on_label_5_linkActivated(this->ui->label_3->text());
    rankScene->setupList();
//    rankScene->setClientManager(this->clientManager);
    rankScene->show();
}


