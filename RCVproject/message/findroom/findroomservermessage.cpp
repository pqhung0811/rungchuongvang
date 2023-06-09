
#include "findroomservermessage.h"

FindRoomServerMessage::FindRoomServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

FindRoomServerMessage::FindRoomServerMessage(QList<quint64> roomIds, QList<QString> roomnames, QString status, QString errorMsg, QObject *parent)
    : ServerMessage{status, errorMsg, parent}
{
    this->addCommandCode(command->toCommand("FINDROOM"));
    this->responseBody->createFindRoomBody(roomIds, roomnames);

    this->finalizeMessageObject();
}

