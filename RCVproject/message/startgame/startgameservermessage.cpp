
#include "startgameservermessage.h"

StartGameServerMessage::StartGameServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

StartGameServerMessage::StartGameServerMessage(QList<Question *> questions, QString status, QString errorMsg, QObject *parent)
    : ServerMessage(status, errorMsg, parent)
{
    this->addCommandCode(this->command->toCommand("STARTGAME"));
    this->responseBody->createQuestionBody(questions);
    this->finalizeMessageObject();
}

