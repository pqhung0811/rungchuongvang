
#include "afkgameservermessage.h"

AfkGameServerMessage::AfkGameServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

AfkGameServerMessage::AfkGameServerMessage(QString status, QString errorMsg, QObject *parent)
    : ServerMessage{status, errorMsg, parent}
{
    this->addCommandCode(this->command->toCommand("AFKGAME"));
    this->finalizeMessageObject();
}

