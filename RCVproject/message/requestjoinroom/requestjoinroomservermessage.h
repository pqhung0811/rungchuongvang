
#ifndef REQUESTJOINROOMSERVERMESSAGE_H
#define REQUESTJOINROOMSERVERMESSAGE_H

#include <servermessage.h>

#include <QObject>


class RequestJoinRoomServerMessage : public ServerMessage
{
    Q_OBJECT
public:
    explicit RequestJoinRoomServerMessage(QObject *parent = nullptr);
};

#endif // REQUESTJOINROOMSERVERMESSAGE_H
