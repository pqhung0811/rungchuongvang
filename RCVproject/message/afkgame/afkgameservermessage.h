
#ifndef AFKGAMESERVERMESSAGE_H
#define AFKGAMESERVERMESSAGE_H

#include <servermessage.h>



class AfkGameServerMessage : public ServerMessage
{
public:
    explicit AfkGameServerMessage(QObject *parent = nullptr);
    explicit AfkGameServerMessage(QString status, QString errorMsg, QObject *parent = nullptr);
};

#endif // AFKGAMESERVERMESSAGE_H
