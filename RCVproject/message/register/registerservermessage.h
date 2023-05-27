
#ifndef REGISTERSERVERMESSAGE_H
#define REGISTERSERVERMESSAGE_H


#include <QObject>
#include <servermessage.h>

class RegisterServerMessage : public ServerMessage
{
    Q_OBJECT
public:
    explicit RegisterServerMessage(QObject *parent = nullptr);
    explicit RegisterServerMessage(QString input, QObject *parent = nullptr);

signals:

};

#endif // REGISTERSERVERMESSAGE_H
