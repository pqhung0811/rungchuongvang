
#ifndef REGISTERCLIENTMESSAGE_H
#define REGISTERCLIENTMESSAGE_H


#include <QObject>
#include "clientmessage.h"
#include "QJsonDocument"

class RegisterClientMessage : public ClientMessage
{
    Q_OBJECT
private:
    QString username;
    QString password;

public:
    explicit RegisterClientMessage(QObject *parent = nullptr);
    explicit RegisterClientMessage(QString input, QObject *parent = nullptr);
    explicit RegisterClientMessage(QString username, QString password ,QObject *parent = nullptr);

signals:

};

#endif // REGISTERCLIENTMESSAGE_H
