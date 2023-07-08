
#ifndef CREATEROOMSERVERMESSAGE_H
#define CREATEROOMSERVERMESSAGE_H

#include <servermessage.h>

#include <QObject>

class CreateRoomServerMessage : public ServerMessage
{
    Q_OBJECT
private:
    QString username;
    quint64 ranked;
    quint64 rankScore;

public:
    explicit CreateRoomServerMessage(QObject *parent = nullptr);
    explicit CreateRoomServerMessage(QString username, quint64 ranked, quint64 rankScore, QString status, QString errorMsg, QObject *parent = nullptr);
};

#endif // CREATEROOMSERVERMESSAGE_H
