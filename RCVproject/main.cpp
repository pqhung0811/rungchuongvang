#include <QApplication>
#include "scene/mainwindow.h"
#include "userapi.h"
#include "questionapi.h"
#include "user.h"
#include "connection.h"
#include "room.h"
#include "question.h"
#include "answerapi.h"
#include "historyapi.h"
#include "answer.h"
#include "usercontroller.h"
#include "core/servercore.h"
#include "core/clientcore.h"
#include "scene/listroomscene.h"
#include "scene/homescene.h"
#include "requestjoinroomcontroller.h"
#include <QList>
#include <QThread>

//class MyThread : public QThread
//{

//public:
//    void run() override
//    {
//        ClientCore* clientCore = ClientCore::getInstance();
//        clientCore->start();
//        MainWindow w = MainWindow();
//        w.show();
//    }

//    explicit MyThread();
//    MyThread(QObject* parent = nullptr) : QThread(parent) { }
//};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/../images/Golden-Bell-PNG.png"));

    Connection* connection = new Connection();
    if (!connection->setConnection()) {
        qDebug() << "Can not connect";
    }
    else {
        qDebug() << "abc";
    }

    ServerCore* serverCore = new ServerCore();
    serverCore->start();

    QThread thread1;
    QThread thread2;
    QThread thread3;

    MainWindow w1 = MainWindow();
    MainWindow w2 = MainWindow();
    MainWindow w3 = MainWindow();

    w1.moveToThread(&thread1);
    w2.moveToThread(&thread2);
    w3.moveToThread(&thread3);

    QObject::connect(&thread1, &QThread::started, &w1, &MainWindow::start);
    QObject::connect(&thread2, &QThread::started, &w2, &MainWindow::start);
    QObject::connect(&thread3, &QThread::started, &w3, &MainWindow::start);

    thread1.start();
    thread2.start();
    thread3.start();

//    ClientCore* clientCore = ClientCore::getInstance();
//    clientCore->start();
//    MainWindow w = MainWindow();
//    w.show();

    return a.exec();
}
