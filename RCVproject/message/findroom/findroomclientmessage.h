
#ifndef FINDROOMCLIENTMESSAGE_H
#define FINDROOMCLIENTMESSAGE_H

#include "clientmessage.h"



class FindRoomClientMessage : public ClientMessage
{
public:
    explicit FindRoomClientMessage(QObject *parent = nullptr);
};

#endif // FINDROOMCLIENTMESSAGE_H
