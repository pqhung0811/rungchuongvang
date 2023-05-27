
#ifndef CREATEROOMCLIENTMESSAGE_H
#define CREATEROOMCLIENTMESSAGE_H

#include <clientmessage.h>

#include <QObject>

class CreateRoomClientMessage : public ClientMessage
{
    Q_OBJECT
private:
    QString roomname;
    quint64 ownerId;
    QString username;
    quint64 ranked;
    quint64 rankScore;

public:
    explicit CreateRoomClientMessage(QObject *parent = nullptr);
    explicit CreateRoomClientMessage(QString input, QObject *parent = nullptr);
    explicit CreateRoomClientMessage(QString roomname, quint64 ownerId, QString username, quint64 ranked, quint64 rankScore, QObject *parent = nullptr);
};

#endif // CREATEROOMCLIENTMESSAGE_H
