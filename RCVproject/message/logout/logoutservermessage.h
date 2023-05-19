
#ifndef LOGOUTSERVERMESSAGE_H
#define LOGOUTSERVERMESSAGE_H

#include <servermessage.h>



class LogoutServerMessage : public ServerMessage
{
private:
    quint64 id;
    QString username;

public:
    explicit LogoutServerMessage(QObject *parent = nullptr);
    explicit LogoutServerMessage(QString input, QObject *parent = nullptr);
    explicit LogoutServerMessage(quint64 id, QString username, QString status, QString errorMsg, QObject *parent = nullptr);
};

#endif // LOGOUTSERVERMESSAGE_H
