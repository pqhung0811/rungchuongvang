
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <core/clientcore.h>
#include <QJsonDocument>
#include <QJsonObject>
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
    void start();

private:
    Ui::MainWindow *ui;
    ClientCore* clientCore;
    QString username;
    QString password;
};

#endif // MAINWINDOW_H
