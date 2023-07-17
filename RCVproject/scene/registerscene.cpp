#include "registerscene.h"
#include "ui_registerscene.h"

RegisterScene::RegisterScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterScene)
{
    this->clientCore = ClientCore::getInstance();
    ui->setupUi(this);
    connect(ui->userEdit, &QLineEdit::returnPressed, this, &RegisterScene::handleUserLineEditReturnPressed);
    connect(ui->passEdit, &QLineEdit::returnPressed, this, &RegisterScene::handlePassLineEditReturnPressed);
    connect(ui->confirmPassEdit, &QLineEdit::returnPressed, this, &RegisterScene::handleConfirmPassLineEditReturnPressed);
}

RegisterScene::~RegisterScene()
{
    delete ui;
}

void RegisterScene::handleUserLineEditReturnPressed()
{
    this->username = ui->userEdit->text();
}

void RegisterScene::handlePassLineEditReturnPressed()
{
    this->password = ui->passEdit->text();
}

void RegisterScene::handleConfirmPassLineEditReturnPressed()
{
    this->confirmPass = ui->confirmPassEdit->text();
}

void RegisterScene::handleRegisterResponse(const QJsonDocument &response)
{
    QString status;
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();
        if (jsonObject.contains("status_code") && jsonObject["status_code"].isString()) {
            status = jsonObject["status_code"].toString();
        }
    }
    if (status.compare("success") == 0) {
        disconnect(clientCore, &ClientCore::Finished, this, &RegisterScene::handleRegisterResponse);
        MainWindow* w = new MainWindow();
        w->setClientCore(this->clientCore);
        w->show();
        close();
    } else {
        MyDialog* myDialog = new MyDialog();
        myDialog->changLabel("Username exist");
        myDialog->show();
    }
}

void RegisterScene::on_backBtn_clicked()
{
    MainWindow* w = new MainWindow();
    w->show();
    close();
}

ClientCore *RegisterScene::getClientCore() const
{
    return clientCore;
}

void RegisterScene::setClientCore(ClientCore *newClientCore)
{
    clientCore = newClientCore;
}


void RegisterScene::on_registerBtn_clicked()
{
    if(password.compare(confirmPass)!=0) {
        MyDialog* myDialog = new MyDialog();
        myDialog->changLabel("Wrong confirm pass");
        myDialog->show();
    }
    else {
        clientCore->registers(this->username, this->password);
        connect(clientCore, &ClientCore::Finished, this, &RegisterScene::handleRegisterResponse);
    }
}

