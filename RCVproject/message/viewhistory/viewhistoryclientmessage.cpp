
#include "viewhistoryclientmessage.h"

ViewHistoryClientMessage::ViewHistoryClientMessage(QObject *parent)
    : ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("VIEWHISTORY"));
    QJsonObject json = QJsonObject();
    this->requestBody->setRequestBody(json);
    this->finalizeMessageObject();
}

