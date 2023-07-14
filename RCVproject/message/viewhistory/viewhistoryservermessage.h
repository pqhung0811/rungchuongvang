
#ifndef VIEWHISTORYSERVERMESSAGE_H
#define VIEWHISTORYSERVERMESSAGE_H

#include <servermessage.h>



class ViewHistoryServerMessage : public ServerMessage
{
public:
    explicit ViewHistoryServerMessage(QObject *parent = nullptr);
    explicit ViewHistoryServerMessage(QList<quint64> tops, QList<quint64> scores, QList<QString> startgames, QList<QString> endgames,
                                      QString status, QString errorMsg, QObject *parent = nullptr);
};

#endif // VIEWHISTORYSERVERMESSAGE_H
