
#ifndef SERVERCORE_H
#define SERVERCORE_H


#include <QObject>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include "requestprocessing.h"
#include <QJsonDocument>
#include <QJsonObject>

class ServerCore : public QObject
{
    Q_OBJECT

private:
    QTcpServer* server;
    QList<QTcpSocket*> connectionSet;
//    RequestProcessing* requestProcessing;

public:
    explicit ServerCore(QObject *parent = nullptr);

public slots:
    void start();
    void onNewConnection();
//    void appendToSocketList(QTcpSocket* socket);
    void onReadyRead();
    void onDisconnected();
signals:

};

#endif // SERVERCORE_H
