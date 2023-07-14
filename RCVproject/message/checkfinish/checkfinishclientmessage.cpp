
#include "checkfinishclientmessage.h"

CheckFinishClientMessage::CheckFinishClientMessage(QObject *parent)
    : ClientMessage{parent}
{

}

CheckFinishClientMessage::CheckFinishClientMessage(quint64 score, QObject *parent)
    : ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("FINISHGAME"));
    this->requestBody->createCheckFinishBody(score);

    this->finalizeMessageObject();
}

