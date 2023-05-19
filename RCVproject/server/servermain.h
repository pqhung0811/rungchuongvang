
#ifndef SERVERMAIN_H
#define SERVERMAIN_H


#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <core/servercore.h>

class ServerMain : public QObject
{
    Q_OBJECT

private:
    ServerCore* serverCore;

public:
    explicit ServerMain(QObject *parent = nullptr);

//public slots:
//    void newConnection();
//    void appendToSocketList(QTcpSocket* socket);

//    void readSocket();
//    void discardSocket();
//    void displayError(QAbstractSocket::SocketError socketError);

signals:

};

#endif // SERVERMAIN_H
