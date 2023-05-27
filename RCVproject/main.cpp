#include <QApplication>
#include "scene/mainwindow.h"
#include "userapi.h"
#include "user.h"
#include "connection.h"
#include "room.h"
#include "roomapi.h"
#include "question.h"
#include "questionapi.h"
#include "answerapi.h"
#include "answer.h"
#include "usercontroller.h"
#include "login/loginclientmessage.h"
#include "login/loginservermessage.h"
#include "logout/logoutclientmessage.h"
#include "logout/logoutservermessage.h"
#include "core/servercore.h"
#include "core/clientcore.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    Connection* connection = new Connection();
    if (!connection->setConnection()) {
        qDebug() << "Can not connect";
    }
    else {
        qDebug() << "abc";
    }

//    LogoutClientMessage *login1 = new LogoutClientMessage(1, "hung");
//    QString tmp = login1->toString();
//    qDebug() << "login: " << tmp;
    ServerCore* serverCore = new ServerCore();
    serverCore->start();
    ClientCore* clientCore = new ClientCore();
    clientCore->start();
//    clientCore->createRoom("room7", 9, "hung", 1, 600);
//    RoomAPI* roomAPI = new RoomAPI();
//    roomAPI->addRoom(1, "abcd", "12/03/2031");
//    roomAPI->getRoomsByStatusAndLevel(1, 1);


    return a.exec();
}
