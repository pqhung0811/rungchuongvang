
#ifndef STARTGAMECLIENTMESSAGE_H
#define STARTGAMECLIENTMESSAGE_H

#include <clientmessage.h>



class StartGameClientMessage : public ClientMessage
{
public:
    explicit StartGameClientMessage(QObject *parent = nullptr);


};

#endif // STARTGAMECLIENTMESSAGE_H
