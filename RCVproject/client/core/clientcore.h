
#ifndef CLIENTCORE_H
#define CLIENTCORE_H


#include <QObject>
#include "QtNetwork/QTcpSocket"
#include <QAbstractSocket>
#include <QHostAddress>
#include <QStandardPaths>
#include <QTcpSocket>
#include <QAbstractSocket>
#include "login/loginclientmessage.h"
#include "attachment.h"
#include <QBuffer>
#include <QIODevice>
#include <QByteArray>

class ClientCore : public QObject
{
    Q_OBJECT

private:
    QTcpSocket* socket;

public:
    explicit ClientCore(QObject *parent = nullptr);
    void connectToServer(const QString &host, quint16 port);

public slots:
    void start();
    void onConnected();
    void onReadyRead();
    void onDisconnected();
    void login(QString username, QString password);
    void sendRequest(QString strMsgToSend);

signals:

};

#endif // CLIENTCORE_H
