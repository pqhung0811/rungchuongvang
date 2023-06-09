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

Ui::RoomScene *RoomScene::getUi() const
{
    return ui;
}

void RoomScene::setUi(Ui::RoomScene *newUi)
{
    ui = newUi;
}

void RoomScene::on_label_linkActivated(const QString &link)
{
    this->ui->label->setText(link);
}


void RoomScene::on_label_2_linkActivated(const QString &link)
{
    this->ui->label_2->setText(link);
}

