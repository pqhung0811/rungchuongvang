
#ifndef VIEWRANKSERVERMESSAGE_H
#define VIEWRANKSERVERMESSAGE_H

#include <servermessage.h>



class ViewRankServerMessage : public ServerMessage
{
public:
    explicit ViewRankServerMessage(QObject *parent = nullptr);
    explicit ViewRankServerMessage(QList<quint64> userIds, QList<QString> usernames, QList<quint64> ranked,
                                   QList<quint64> rankScore, QString status, QString errorMsg, QObject *parent = nullptr);
};

#endif // VIEWRANKSERVERMESSAGE_H
