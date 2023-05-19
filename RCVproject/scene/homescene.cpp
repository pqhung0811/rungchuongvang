#include "homescene.h"
#include "ui_homescene.h"
#include "roomscene.h"

HomeScene::HomeScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeScene)
{
    ui->setupUi(this);
    connect(ui->playNowBtn, SIGNAL(clicked()), this, SLOT(on_playNowBtn_clicked()));
    connect(ui->createRoomBtn, SIGNAL(clicked()), this, SLOT(on_createRoomBtn_clicked()));
}

HomeScene::~HomeScene()
{
    delete ui;
}

void HomeScene::on_playNowBtn_clicked()
{
    RoomScene *roomScene = new RoomScene();
    roomScene->show();
    close();
}


void HomeScene::on_createRoomBtn_clicked()
{

}

