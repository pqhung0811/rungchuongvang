
#ifndef CHECKFINISHSERVERMESSAGE_H
#define CHECKFINISHSERVERMESSAGE_H

#include <servermessage.h>



class CheckFinishServerMessage : public ServerMessage
{
public:
    explicit CheckFinishServerMessage(QObject *parent = nullptr);
    explicit CheckFinishServerMessage(QList<QString> usernames, QList<quint64> scores, QString status, QString errorMsg, QObject *parent = nullptr);

};

#endif // CHECKFINISHSERVERMESSAGE_H
