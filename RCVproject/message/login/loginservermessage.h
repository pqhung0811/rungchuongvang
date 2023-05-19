
#ifndef LOGINSERVERMESSAGE_H
#define LOGINSERVERMESSAGE_H


#include <QObject>
#include "statuscode.h"
#include "servermessage.h"

class LoginServerMessage : public ServerMessage
{
    Q_OBJECT

private:
    quint64 id;
    QString username;
    QString password;
    quint64 ranked;
    quint64 rankScore;

public:
    explicit LoginServerMessage(QObject *parent = nullptr);
    explicit LoginServerMessage(quint64 id, QString username, QString password, quint64 ranked, quint64 rankScore, QString status, QString errMsg, QObject *parent = nullptr);
    explicit LoginServerMessage(QString input, QObject *parent = nullptr);

    void setId(quint64 newId);

public slots:
    quint64 getId();
    QString getUsername();
    QString getPassword();
    quint64 getRanked();
    quint64 getRankScore();
    void setUsername(const QString &newUsername);

signals:

};

#endif // LOGINSERVERMESSAGE_H
