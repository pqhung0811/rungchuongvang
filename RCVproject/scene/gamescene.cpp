#include "gamescene.h"
#include "ui_gamescene.h"

GameScene::GameScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameScene)
{
    ui->setupUi(this);
}

GameScene::~GameScene()
{
    delete ui;
}

void GameScene::on_name_linkActivated(const QString &link)
{

}


void GameScene::on_rank_linkActivated(const QString &link)
{

}

