
#ifndef FINDROOMSERVERMESSAGE_H
#define FINDROOMSERVERMESSAGE_H

#include <servermessage.h>
#include <QList>


class FindRoomServerMessage : public ServerMessage
{
private:

public:
    explicit FindRoomServerMessage(QObject *parent = nullptr);
    explicit FindRoomServerMessage(QList<quint64> roomIds, QList<QString> roomnames, QString status, QString errorMsg, QObject *parent = nullptr);
};

#endif // FINDROOMSERVERMESSAGE_H
