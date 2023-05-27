
#ifndef REQUESTJOINROOMCLIENTMESSAGE_H
#define REQUESTJOINROOMCLIENTMESSAGE_H

#include <clientmessage.h>
#include <QJsonDocument>
#include <QObject>


class RequestJoinRoomClientMessage : public ClientMessage
{
    Q_OBJECT
private:
    quint64 userId;
    quint64 roomId;

public:
    explicit RequestJoinRoomClientMessage(QObject *parent = nullptr);
    explicit RequestJoinRoomClientMessage(QString input, QObject *parent = nullptr);
    explicit RequestJoinRoomClientMessage(quint64 userId, quint64 roomId, QObject *parent = nullptr);
};

#endif // REQUESTJOINROOMCLIENTMESSAGE_H
