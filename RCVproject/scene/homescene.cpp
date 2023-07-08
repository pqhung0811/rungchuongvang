#include "homescene.h"
#include "ui_homescene.h"
#include "roomscene.h"

HomeScene::HomeScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeScene)
{
    ui->setupUi(this);
    this->clientCore = ClientCore::getInstance();

//    connect(ui->playNowBtn, SIGNAL(clicked()), this, SLOT(on_playNowBtn_clicked()));
//    connect(ui->createRoomBtn, SIGNAL(clicked()), this, SLOT(on_createRoomBtn_clicked()));
}

HomeScene::~HomeScene()
{
    delete ui;
}

void HomeScene::on_createRoomBtn_clicked()
{
    CreateRoomDialog* createRoomDialog = new CreateRoomDialog();
    createRoomDialog->exec();
    clientCore->createRoom(createRoomDialog->getRoomname());
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


void HomeScene::on_findRoomBtn_clicked()
{
    qDebug() << "cac cac" << this->ui->label_2->text();
    clientCore->findRoom();
    connect(clientCore, &ClientCore::Finished, this, &HomeScene::handleFindRoomResponse);
}

void HomeScene::handleFindRoomResponse(const QJsonDocument &response)
{
    QList<QString> ids;
    QList<QString> roomnames;
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();

        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            if (infoObject.contains("id") && infoObject["id"].isArray()) {
                QJsonArray idArray = infoObject.value("id").toArray();
                qDebug() << "homescene id: " << idArray;
                for (const QJsonValue& value : idArray) {
                    ids.append(value.toString());
                }
            }
            if(infoObject.contains("roomname") && infoObject["roomname"].isArray()) {
                QJsonArray roomnamesArray = infoObject.value("roomname").toArray();
                qDebug() << "homescene name: " << roomnamesArray;
                for (const QJsonValue& value : roomnamesArray) {
                    if (value.isString()) {
                        roomnames.append(value.toString());
                    }
                }
            }
        }
    }
    qDebug() << "size of id: " << ids.size();
    qDebug() << "size of name: " << roomnames.size();
    ListRoomScene* listRoomScene = new ListRoomScene();
    listRoomScene->setRoomIds(ids);
    listRoomScene->setRoomnames(roomnames);
    listRoomScene->setupList();
    listRoomScene->show();
    close();
}

