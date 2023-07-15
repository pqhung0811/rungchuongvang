
#ifndef RESPONSEJOINROOMSERVERMESSAGE_H
#define RESPONSEJOINROOMSERVERMESSAGE_H

#include <servermessage.h>
#include "user.h"
#include <QObject>


class ResponseJoinRoomServerMessage : public ServerMessage
{
    Q_OBJECT
public:
    explicit ResponseJoinRoomServerMessage(QObject *parent = nullptr);
    explicit ResponseJoinRoomServerMessage(quint64 userId, QString roomname, quint8 reply, QList<User*> users, QString status, QString errorMsg, QObject *parent = nullptr);
    explicit ResponseJoinRoomServerMessage(quint64 userId, quint8 reply, QString status, QString errorMsg, QObject *parent = nullptr);
};

#endif // RESPONSEJOINROOMSERVERMESSAGE_H
