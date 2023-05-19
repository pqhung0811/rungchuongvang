#include "listroomscene.h"
#include "ui_listroomscene.h"

ListRoomScene::ListRoomScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListRoomScene)
{
    ui->setupUi(this);
}

ListRoomScene::~ListRoomScene()
{
    delete ui;
}
