
#ifndef CREATEROOMSERVERMESSAGE_H
#define CREATEROOMSERVERMESSAGE_H

#include <servermessage.h>

#include <QObject>

class CreateRoomServerMessage : public ServerMessage
{
    Q_OBJECT
public:
    explicit CreateRoomServerMessage(QObject *parent = nullptr);
};

#endif // CREATEROOMSERVERMESSAGE_H
