
#include "finalerrormessage.h"

FinalErrorMessage::FinalErrorMessage(QObject *parent)
    : ServerMessage{parent}
{

}

FinalErrorMessage::FinalErrorMessage(QString status, QString errorMsg, QString cmd, QObject *parent)
    : ServerMessage{status, errorMsg, parent}
{
    this->addCommandCode(this->command->toCommand(cmd));
    this->finalizeMessageObject();
}

