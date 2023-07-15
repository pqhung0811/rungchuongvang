
#include "responsejoinroomclientmessage.h"

ResponseJoinRoomClientMessage::ResponseJoinRoomClientMessage(QObject *parent)
    : ClientMessage{parent}
{

}

ResponseJoinRoomClientMessage::ResponseJoinRoomClientMessage(QString input, QObject *parent)
    : ClientMessage{input, parent}
{
    this->userId = this->requestBody->getRequestBody().value("userId").toInt();
    this->reply = this->requestBody->getRequestBody().value("reply").toInt();
}

ResponseJoinRoomClientMessage::ResponseJoinRoomClientMessage(quint64 userId, quint8 reply, QObject *parent)
    : ClientMessage{parent}
{
    this->userId = userId;
    this->reply = reply;

    this->addCommandCode(command->toCommand("RESPONSEJOINROOM"));
    this->requestBody->createResponseJoinRoomBody(userId, reply);
    qDebug() << "requesbody: " << this->requestBody->getRequestBody();

    this->finalizeMessageObject();
}
