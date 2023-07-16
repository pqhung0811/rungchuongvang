
#include "afkgameclientmessage.h"

AfkGameClientMessage::AfkGameClientMessage(QObject *parent)
    : ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("AFKGAME"));
    QJsonObject jsonOb = QJsonObject();
    this->requestBody->setRequestBody(jsonOb);

    this->finalizeMessageObject();
}

