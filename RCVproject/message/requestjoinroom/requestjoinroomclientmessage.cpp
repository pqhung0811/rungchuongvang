
#include "requestjoinroomclientmessage.h"

RequestJoinRoomClientMessage::RequestJoinRoomClientMessage(QObject *parent)
    : ClientMessage{parent}
{

}

RequestJoinRoomClientMessage::RequestJoinRoomClientMessage(QString input, QObject *parent)
    : ClientMessage{input, parent}
{
    this->userId = this->requestBody->getRequestBody().value("userId").toInt();
    this->roomId = this->requestBody->getRequestBody().value("roomId").toInt();
}

RequestJoinRoomClientMessage::RequestJoinRoomClientMessage(quint64 userId, quint64 roomId, QObject *parent)
    : ClientMessage{parent}
{
    this->userId = userId;
    this->roomId = roomId;

    this->addCommandCode(command->toCommand("REQUESTJOINROOM"));
    this->requestBody->createRequestJoinRoomBody(userId, roomId);
    qDebug() << "requesbody: " << this->requestBody->getRequestBody();

    this->finalizeMessageObject();
}
