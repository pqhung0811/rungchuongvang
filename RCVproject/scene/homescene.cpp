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
    qDebug() << "roomname: " << createRoomDialog->getRoomname();
    clientCore->createRoom(createRoomDialog->getRoomname());
    RoomScene* roomScene = new RoomScene();
    roomScene->on_label_linkActivated(this->ui->label_2->text());
    roomScene->on_label_2_linkActivated(this->ui->label_3->text());
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
    qDebug() << "cac cac";
    clientCore->findRoom();
    connect(clientCore, &ClientCore::Finished, this, &HomeScene::handleFindRoomResponse);
}

void HomeScene::handleFindRoomResponse(const QJsonDocument &response)
{
    QList<int> ids;
    QList<QString> roomnames;
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();

        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            // Lấy giá trị của key "username" từ QJsonObject "infoObject"
            if (infoObject.contains("id") && infoObject["id"].isString()) {
                QString idsStr = infoObject["id"].toString();
                qDebug() << "id: " << idsStr;
            }
            if(infoObject.contains("roomname") && infoObject["roomname"].isString()) {
                QString roomnamesStr = infoObject["roomname"].toString();
                qDebug() << "id: " << roomnamesStr;
            }
        }
    }
}

