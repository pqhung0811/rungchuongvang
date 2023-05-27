
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
#include "logout/logoutclientmessage.h"
#include "register/registerclientmessage.h"
#include "createroom/createroomclientmessage.h"
#include "requestjoinroom/requestjoinroomclientmessage.h"
#include "attachment.h"
#include <QBuffer>
#include <QIODevice>
#include <QByteArray>

class ClientCore : public QObject
{
    Q_OBJECT

private:
    QTcpSocket* socket;
    QString inputMessage;

public:
    explicit ClientCore(QObject *parent = nullptr);
    void connectToServer(const QString &host, quint16 port);

    QString getInputMessage() const;
    void setInputMessage(const QString &newInputMessage);

public slots:
    void start();
    void onConnected();
    void onReadyRead();
    void onDisconnected();
    void login(QString username, QString password);
    void sendRequest(QString strMsgToSend);
    void logout(quint64 id, QString username);
    void registers(QString username, QString password);
    void createRoom(QString roomname, quint64 ownerId, QString username, quint64 ranked, quint64 rankScore);
    void requestJoinRoom(quint64 userId, quint64 roomId);

signals:

};

#endif // CLIENTCORE_H
