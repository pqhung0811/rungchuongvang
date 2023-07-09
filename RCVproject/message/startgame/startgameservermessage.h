
#ifndef STARTGAMESERVERMESSAGE_H
#define STARTGAMESERVERMESSAGE_H

#include <servermessage.h>



class StartGameServerMessage : public ServerMessage
{
public:
    explicit StartGameServerMessage(QObject *parent = nullptr);
};

#endif // STARTGAMESERVERMESSAGE_H
