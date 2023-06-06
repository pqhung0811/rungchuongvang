
#include "findroomclientmessage.h"

FindRoomClientMessage::FindRoomClientMessage(QObject *parent)
    : ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("FINDROOM"));
    this->finalizeMessageObject();
}

