
#include "checkfinishservermessage.h"

CheckFinishServerMessage::CheckFinishServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

CheckFinishServerMessage::CheckFinishServerMessage(QList<QString> usernames, QList<quint64> scores, QString status, QString errorMsg, QObject *parent)
    : ServerMessage{status, errorMsg, parent}
{
    this->addCommandCode(this->command->toCommand("FINISHGAME"));
    this->responseBody->createFinishBody(usernames, scores);
    this->finalizeMessageObject();
}

