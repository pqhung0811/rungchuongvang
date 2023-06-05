#ifndef REGISTERSCENE_H
#define REGISTERSCENE_H

#include <QWidget>
#include "mainwindow.h"
#include "core/clientcore.h"
#include "mydialog.h"

namespace Ui {
class RegisterScene;
}

class RegisterScene : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterScene(QWidget *parent = nullptr);
    ~RegisterScene();

    ClientCore *getClientCore() const;
    void setClientCore(ClientCore *newClientCore);

private slots:
    void handleUserLineEditReturnPressed();
    void handlePassLineEditReturnPressed();
    void handleConfirmPassLineEditReturnPressed();
    void handleRegisterResponse(const QJsonDocument &response);
    void on_backBtn_clicked();

    void on_registerBtn_clicked();

private:
    ClientCore* clientCore;
    Ui::RegisterScene *ui;
    QString username;
    QString password;
    QString confirmPass;
};

#endif // REGISTERSCENE_H
