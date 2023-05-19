
#ifndef SERVERCORE_H
#define SERVERCORE_H


#include <QObject>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>

class ServerCore : public QObject
{
    Q_OBJECT

private:
    QTcpServer* server;
    QList<QTcpSocket*> connectionSet;

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
