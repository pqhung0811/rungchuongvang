
#include "startgameclientmessage.h"

StartGameClientMessage::StartGameClientMessage(QObject *parent)
    : ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("STARTGAME"));
    QJsonObject json = QJsonObject();
    this->requestBody->setRequestBody(json);
    this->finalizeMessageObject();
}

