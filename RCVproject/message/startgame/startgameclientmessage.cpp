
#include "startgameclientmessage.h"

StartGameClientMessage::StartGameClientMessage(QObject *parent)
    : ClientMessage{parent}
{

}

StartGameClientMessage::StartGameClientMessage(quint64 noQuestion, QObject *parent)
    : ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("STARTGAME"));
    this->requestBody->createStartGameBody(noQuestion);
    this->finalizeMessageObject();
}

