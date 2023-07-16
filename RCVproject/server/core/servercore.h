
#ifndef SERVERCORE_H
#define SERVERCORE_H


#include <QObject>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include "requestprocessing.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QMap>
#include <userapi.h>
#include "login/loginservermessage.h"
#include "servercreatemessage.h"

class ServerCore : public QObject
{
    Q_OBJECT

private:
    QTcpServer* server;
    QMap<quint64, QTcpSocket*> connectionSet;
    ServerCreateMessage* serverCreateMessage;
//    QList<QTcpSocket*> connectionSet;
//    RequestProcessing* requestProcessing;

public:
    explicit ServerCore(QObject *parent = nullptr);

    QMap<quint64, QTcpSocket *> getConnectionSet() const;
    void setConnectionSet(const QMap<quint64, QTcpSocket *> &newConnectionSet);

public slots:
    void start();
    void onNewConnection();
//    void appendToSocketList(QTcpSocket* socket);
    void onReadyRead();
    void onDisconnected();

signals:

};

#endif // SERVERCORE_H
