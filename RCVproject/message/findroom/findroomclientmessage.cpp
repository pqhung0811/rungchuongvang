
#include "findroomclientmessage.h"

FindRoomClientMessage::FindRoomClientMessage(QObject *parent)
    : ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("FINDROOM"));
    QJsonObject json = QJsonObject();
    this->requestBody->setRequestBody(json);
    this->finalizeMessageObject();
}

