
#include "responsejoinroomservermessage.h"

ResponseJoinRoomServerMessage::ResponseJoinRoomServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

ResponseJoinRoomServerMessage::ResponseJoinRoomServerMessage(quint64 userId, QString roomname, quint8 reply, QList<User*> users, QString status, QString errorMsg, QObject *parent)
    : ServerMessage(status, errorMsg, parent)
{
    this->addCommandCode(this->command->toCommand("RESPONSEJOINROOM"));
    this->responseBody->createResponseJoinRoomBody(userId, roomname, users, reply);
    this->finalizeMessageObject();
}

ResponseJoinRoomServerMessage::ResponseJoinRoomServerMessage(quint64 userId, quint8 reply, QString status, QString errorMsg, QObject *parent)
    : ServerMessage(status, errorMsg, parent)
{
    this->addCommandCode(this->command->toCommand("RESPONSEJOINROOM"));
    this->responseBody->createDenyJoinRoomBody(userId, reply);
    this->finalizeMessageObject();
}

ResponseJoinRoomServerMessage::ResponseJoinRoomServerMessage(QString username, quint64 rankscore, QString status, QString errorMsg, QObject *parent)
    : ServerMessage(status, errorMsg, parent)
{
    this->addCommandCode(this->command->toCommand("ACCEPTJOINROOM"));
    this->responseBody->createAcceptJoinRoomBody(username, rankscore);
    this->finalizeMessageObject();
}

