#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ui_register.h"
#include "register.h"
#include "homescene.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setStyleSheet("MainWindow {background-image:url(D:/Networkprogramming/project/images/aaa.jpg)}");
    ui->setupUi(this);

    connect(ui->registerBtn, SIGNAL(clicked()), this, SLOT(on_registerBtn_clicked()));
    connect(ui->signInBtn, SIGNAL(clicked()), this, SLOT(on_signInBtn_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_signInBtn_clicked()
{
    HomeScene *homescene = new HomeScene();
    homescene->show();
    close();
}


void MainWindow::on_registerBtn_clicked()
{
    Register *registerScene = new Register();
    registerScene->show();
    close();
}

