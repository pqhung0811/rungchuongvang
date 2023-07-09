
#include "viewrankclientmessage.h"

ViewRankClientMessage::ViewRankClientMessage(QObject *parent)
    : ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("VIEWRANK"));
    QJsonObject json = QJsonObject();
    this->requestBody->setRequestBody(json);
    this->finalizeMessageObject();
}

