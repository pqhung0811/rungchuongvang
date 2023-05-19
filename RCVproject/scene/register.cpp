#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
//    setStyleSheet("QWidget {background-image:url(D:/Networkprogramming/project/images/aaa.jpg)}");
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_registerBtn_clicked()
{

}

