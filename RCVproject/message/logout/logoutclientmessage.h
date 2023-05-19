
#ifndef LOGOUTCLIENTMESSAGE_H
#define LOGOUTCLIENTMESSAGE_H

#include <clientmessage.h>



class LogoutClientMessage : public ClientMessage
{
private:
    quint64 id;
    QString username;

public:
    explicit LogoutClientMessage(QObject *parent = nullptr);
    explicit LogoutClientMessage(quint64 id, QString username, QObject *parent = nullptr);
    explicit LogoutClientMessage(QString input, QObject *parent = nullptr);
    QString getUsername() const;
    void setUsername(const QString &newUsername);
};

#endif // LOGOUTCLIENTMESSAGE_H
