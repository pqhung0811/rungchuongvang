
#ifndef VIEWRANKCLIENTMESSAGE_H
#define VIEWRANKCLIENTMESSAGE_H

#include <clientmessage.h>



class ViewRankClientMessage : public ClientMessage
{
public:
    explicit ViewRankClientMessage(QObject *parent = nullptr);
};

#endif // VIEWRANKCLIENTMESSAGE_H
