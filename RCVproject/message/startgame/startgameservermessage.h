
#ifndef STARTGAMESERVERMESSAGE_H
#define STARTGAMESERVERMESSAGE_H

#include <servermessage.h>
#include "question.h"


class StartGameServerMessage : public ServerMessage
{
public:
    explicit StartGameServerMessage(QObject *parent = nullptr);
    explicit StartGameServerMessage(QList<Question*> questions, QString status, QString errorMsg, QObject *parent = nullptr);
};

#endif // STARTGAMESERVERMESSAGE_H
