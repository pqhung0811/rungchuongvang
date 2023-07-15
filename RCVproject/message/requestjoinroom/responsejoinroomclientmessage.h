
#ifndef RESPONSEJOINROOMCLIENTMESSAGE_H
#define RESPONSEJOINROOMCLIENTMESSAGE_H

#include <clientmessage.h>

#include <QObject>
#include <QJsonDocument>

class ResponseJoinRoomClientMessage : public ClientMessage
{
    Q_OBJECT
private:
    quint64 userId;
    quint64 roomId;
    quint8 reply;

public:
    explicit ResponseJoinRoomClientMessage(QObject *parent = nullptr);
    explicit ResponseJoinRoomClientMessage(QString input, QObject *parent = nullptr);
    explicit ResponseJoinRoomClientMessage(quint64 userId, quint8 reply, QObject *parent = nullptr);
};

#endif // RESPONSEJOINROOMCLIENTMESSAGE_H
