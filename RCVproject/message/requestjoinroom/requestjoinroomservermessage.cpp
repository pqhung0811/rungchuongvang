
#include "requestjoinroomservermessage.h"

RequestJoinRoomServerMessage::RequestJoinRoomServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

RequestJoinRoomServerMessage::RequestJoinRoomServerMessage(quint64 id, QString username, quint64 rankScore, QString status, QString errorMsg, QObject *parent)
    : ServerMessage(status, errorMsg, parent)
{
    this->addCommandCode(this->command->toCommand("REQUESTJOINROOM"));
    this->responseBody->createRequestJoinRoomBody(id, username, rankScore);
    this->finalizeMessageObject();
}

