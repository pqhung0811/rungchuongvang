
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <core/clientcore.h>
#include <core/clientmanager.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMutex>
#include <QWaitCondition>
#include <QThread>
#include "mydialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    ClientCore *getClientCore() const;
    void setClientCore(ClientCore *newClientCore);

private slots:
    void on_signInBtn_clicked();

    void on_registerBtn_clicked();

    void handleUserLineEditReturnPressed();
    void handlePassLineEditReturnPressed();
    void handleLoginResponse(const QJsonDocument& response);
    void disconnectSignal();
//    void start();

private:
    Ui::MainWindow *ui;
    ClientCore* clientCore;
//    ClientManager* clientManager;
    QString username;
    QString password;
    QMutex mutex;
    bool responseReceived = false;

};

#endif // MAINWINDOW_H
