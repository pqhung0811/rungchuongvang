
#ifndef VIEWHISTORYCLIENTMESSAGE_H
#define VIEWHISTORYCLIENTMESSAGE_H

#include <clientmessage.h>



class ViewHistoryClientMessage : public ClientMessage
{
public:
    explicit ViewHistoryClientMessage(QObject *parent = nullptr);
};

#endif // VIEWHISTORYCLIENTMESSAGE_H
