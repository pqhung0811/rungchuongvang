#include "roomscene.h"
#include "ui_roomscene.h"
#include <QLabel>
#include <QLayout>

RoomScene::RoomScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RoomScene)
{
    ui->setupUi(this);
//    setStyleSheet("QWidget {background-image:url(D:/Networkprogramming/project/images/gold-frame.jpg)}");
}

RoomScene::~RoomScene()
{
    delete ui;
}
