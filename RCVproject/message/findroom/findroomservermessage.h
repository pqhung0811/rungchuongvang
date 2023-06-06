
#ifndef FINDROOMSERVERMESSAGE_H
#define FINDROOMSERVERMESSAGE_H

#include <servermessage.h>



class FindRoomServerMessage : public ServerMessage
{
public:
    explicit FindRoomServerMessage(QObject *parent = nullptr);

};

#endif // FINDROOMSERVERMESSAGE_H
