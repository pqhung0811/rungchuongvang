#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ui_register.h"
#include "registerscene.h"
#include "homescene.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->clientCore = ClientCore::getInstance();
    setStyleSheet("MainWindow {background-image:url(D:/Networkprogramming/project/images/aaa.jpg)}");
    ui->setupUi(this);

//    connect(ui->registerBtn, &QPushButton::clicked, this, &MainWindow::on_registerBtn_clicked);
//    connect(ui->signInBtn, SIGNAL(clicked()), this, SLOT(on_signInBtn_clicked()));
    connect(ui->usernameEdit, &QLineEdit::returnPressed, this, &MainWindow::handleUserLineEditReturnPressed);
    connect(ui->passwordEdit, &QLineEdit::returnPressed, this, &MainWindow::handlePassLineEditReturnPressed);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_signInBtn_clicked()
{
    clientCore->login(this->username, this->password);
//    QString msg = clientCore->getOutputMessage();
    // Lắng nghe sự kiện finished() để nhận phản hồi từ server
    connect(clientCore, &ClientCore::Finished, this, &MainWindow::handleLoginResponse);
}

void MainWindow::on_registerBtn_clicked()
{
    RegisterScene *registerScene = new RegisterScene();
    registerScene->show();
    close();
}

void MainWindow::handleUserLineEditReturnPressed() {
    this->username = ui->usernameEdit->text();
}

void MainWindow::handlePassLineEditReturnPressed() {
    this->password = ui->passwordEdit->text();
}

void MainWindow::handleLoginResponse(const QJsonDocument &response)
{
    qDebug() << "Login response: " << response;
    QString status;
    QString errorMsg;
    QString username;
    QString rankScore;
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();
        if (jsonObject.contains("status_code") && jsonObject["status_code"].isString()) {
            status = jsonObject["status_code"].toString();
        }
        if (jsonObject.contains("error") && jsonObject["error"].isString()) {
            errorMsg = jsonObject["error"].toString();
        }
        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            // Lấy giá trị của key "username" từ QJsonObject "infoObject"
            if (infoObject.contains("username") && infoObject["username"].isString()) {
                username = infoObject["username"].toString();
                qDebug() << "main window app: " << username;
            }
            if (infoObject.contains("rankScore") && infoObject["rankScore"].isString()) {
                rankScore = infoObject["rankScore"].toString();
            }
        }
    }
    if (status.compare("success") == 0) {
        HomeScene* homeScene = new HomeScene();
        qDebug() << "main win: " << username;
        homeScene->on_label_2_linkActivated("   " + username);
        homeScene->show();
        close();
    } else {
        if(errorMsg.compare("invalid username")==0) {
            MyDialog* myDialog = new MyDialog();
            myDialog->changLabel("Invalid Username");
            myDialog->show();
        }
        else {
            MyDialog* myDialog = new MyDialog();
            myDialog->changLabel("Invalid Password");
            myDialog->show();
        }
    }
}

void MainWindow::start()
{
    clientCore = ClientCore::getInstance();
    clientCore->start();
    clientCore->login(this->username, this->password);
}

ClientCore *MainWindow::getClientCore() const
{
    return clientCore;
}

void MainWindow::setClientCore(ClientCore *newClientCore)
{
    clientCore = newClientCore;
}

