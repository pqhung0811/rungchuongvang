
#ifndef RESPONSEJOINROOMSERVERMESSAGE_H
#define RESPONSEJOINROOMSERVERMESSAGE_H

#include <servermessage.h>

#include <QObject>


class ResponseJoinRoomServerMessage : public ServerMessage
{
    Q_OBJECT
public:
    explicit ResponseJoinRoomServerMessage(QObject *parent = nullptr);
};

#endif // RESPONSEJOINROOMSERVERMESSAGE_H
