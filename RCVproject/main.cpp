#include <QApplication>
#include "scene/mainwindow.h"
#include "userapi.h"
#include "user.h"
#include "connection.h"
#include "room.h"
#include "question.h"
#include "answerapi.h"
#include "answer.h"
#include "usercontroller.h"
#include "login/loginclientmessage.h"
#include "login/loginservermessage.h"
#include "logout/logoutclientmessage.h"
#include "logout/logoutservermessage.h"
#include "core/servercore.h"
#include "core/clientcore.h"
#include "scene/listroomscene.h"
#include "scene/homescene.h"
#include "message/findroom/findroomservermessage.h"
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
////    MyThread(QObject* parent = nullptr) : QThread(parent) { }
//};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connection* connection = new Connection();
    if (!connection->setConnection()) {
        qDebug() << "Can not connect";
    }
    else {
        qDebug() << "abc";
    }

    ServerCore* serverCore = new ServerCore();
    serverCore->start();
    ClientCore* clientCore = ClientCore::getInstance();
    clientCore->start();
    MainWindow w = MainWindow();
    w.show();
//    MyThread thread1;
//    MyThread thread2;

//    thread1.start();
//    thread2.start();
//    HomeScene* homeScene = new HomeScene();
//    homeScene->show();

//    QList<quint64> ids;
//    QList<QString> names;

//    ids.append(1);
//    ids.append(2);
//    names.append("a");
//    names.append("b");

//    FindRoomServerMessage* findRoomServerMessage = new FindRoomServerMessage(ids, names, "success", "");
//    qDebug() << "main " << findRoomServerMessage->toString();

//    LogoutClientMessage *login1 = new LogoutClientMessage(1, "hung");
//    QString tmp = login1->toString();
//    qDebug() << "login: " << tmp;
//    ClientCore* clientCore = new ClientCore();
//    clientCore->start();
//    clientCore->responseJoinRoom(2, 1, 1);
//    RoomAPI* roomAPI = new RoomAPI();
//    roomAPI->addRoom(1, "abcd", "12/03/2031");
//    roomAPI->getRoomsByStatusAndLevel(1, 1);


    return a.exec();
}
