#include "rankscene.h"
#include "ui_rankscene.h"

RankScene::RankScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RankScene)
{

    ui->setupUi(this);
}

RankScene::~RankScene()
{
    delete ui;
}
