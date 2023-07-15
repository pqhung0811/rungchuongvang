
#ifndef REQUESTJOINROOMSERVERMESSAGE_H
#define REQUESTJOINROOMSERVERMESSAGE_H

#include <servermessage.h>

#include <QObject>


class RequestJoinRoomServerMessage : public ServerMessage
{
    Q_OBJECT
public:
    explicit RequestJoinRoomServerMessage(QObject *parent = nullptr);
    explicit RequestJoinRoomServerMessage(quint64 id, QString username, quint64 rankScore, QString status, QString errMsg, QObject *parent = nullptr);
};

#endif // REQUESTJOINROOMSERVERMESSAGE_H
