
#ifndef STARTGAMECLIENTMESSAGE_H
#define STARTGAMECLIENTMESSAGE_H

#include <clientmessage.h>



class StartGameClientMessage : public ClientMessage
{
public:
    explicit StartGameClientMessage(QObject *parent = nullptr);
    explicit StartGameClientMessage(quint64 noQuestion, QObject *parent = nullptr);


};

#endif // STARTGAMECLIENTMESSAGE_H
