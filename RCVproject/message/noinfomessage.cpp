
#include "noinfomessage.h"

NoInfoMessage::NoInfoMessage(QObject *parent)
    : ServerMessage{parent}
{

}

NoInfoMessage::NoInfoMessage(QString status, QString errorMsg, QString cmd, QObject *parent)
    : ServerMessage{status, errorMsg, parent}
{
    this->addCommandCode(this->command->toCommand(cmd));
    this->finalizeMessageObject();
}

