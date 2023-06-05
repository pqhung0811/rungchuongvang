
#ifndef NOINFOMESSAGE_H
#define NOINFOMESSAGE_H

#include "servermessage.h"



class NoInfoMessage : public ServerMessage
{
public:
    explicit NoInfoMessage(QObject *parent = nullptr);
    explicit NoInfoMessage(QString status, QString errorMsg, QString cmd, QObject *parent = nullptr);
};

#endif // NOINFOMESSAGE_H
