
#ifndef CHECKFINISHCLIENTMESSAGE_H
#define CHECKFINISHCLIENTMESSAGE_H

#include "clientmessage.h"



class CheckFinishClientMessage : public ClientMessage
{
public:
    explicit CheckFinishClientMessage(QObject *parent = nullptr);
    explicit CheckFinishClientMessage(quint64 score, QObject *parent = nullptr);
};

#endif // CHECKFINISHCLIENTMESSAGE_H
