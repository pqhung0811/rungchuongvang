
#include "createroomservermessage.h"

CreateRoomServerMessage::CreateRoomServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

CreateRoomServerMessage::CreateRoomServerMessage(QString username, quint64 ranked, quint64 rankScore, QString status, QString errorMsg, QObject *parent)
{
    this->username = username;
    this->ranked = ranked;
    this->rankScore = rankScore;
    this->addCommandCode(this->command->toCommand("CREATEROOM"));
    this->responseBody->createCreateRoomBody(username, ranked, rankScore);
    this->finalizeMessageObject();
}

