
#ifndef AFKGAMECLIENTMESSAGE_H
#define AFKGAMECLIENTMESSAGE_H

#include <clientmessage.h>



class AfkGameClientMessage : public ClientMessage
{
public:
    explicit AfkGameClientMessage(QObject *parent = nullptr);
};

#endif // AFKGAMECLIENTMESSAGE_H
