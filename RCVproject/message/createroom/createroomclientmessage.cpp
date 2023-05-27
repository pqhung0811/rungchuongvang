
#include "createroomclientmessage.h"

CreateRoomClientMessage::CreateRoomClientMessage(QObject *parent)
    : ClientMessage{parent}
{

}

CreateRoomClientMessage::CreateRoomClientMessage(QString input, QObject *parent)
    : ClientMessage{input, parent}
{
    this->roomname = this->requestBody->getRequestBody().value("roomname").toString();
    this->username = this->requestBody->getRequestBody().value("username").toString();
    this->ownerId = this->requestBody->getRequestBody().value("ownerId").toInt();
    this->ranked = this->requestBody->getRequestBody().value("ranked").toInt();
    this->rankScore = this->requestBody->getRequestBody().value("rankScore").toInt();
}

CreateRoomClientMessage::CreateRoomClientMessage(QString roomname, quint64 ownerId, QString username, quint64 ranked, quint64 rankScore, QObject *parent)
    : ClientMessage{parent}
{
    this->roomname = roomname;
    this->ownerId = ownerId;
    this->username = username;
    this->ranked = ranked;
    this->rankScore = rankScore;

    this->addCommandCode(command->toCommand("CREATEROOM"));
    this->requestBody->createCreateRoomBody(roomname, ownerId, username, ranked, rankScore);
    qDebug() << "requesbody: " << this->requestBody->getRequestBody();

    this->finalizeMessageObject();
}
