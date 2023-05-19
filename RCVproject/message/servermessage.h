
#ifndef SERVERMESSAGE_H
#define SERVERMESSAGE_H


#include <QObject>
#include "message.h"
#include "responsebody.h"
#include "statuscode.h"
#include <QJsonDocument>

class ServerMessage : public Message
{
    Q_OBJECT

protected:
    ResponseBody* responseBody;
    StatusCode* statusCode;
    QString errorMsg;

public:
    explicit ServerMessage(QObject *parent = nullptr);
    explicit ServerMessage(QString input, QObject *parent = nullptr);
    explicit ServerMessage(QString status, QString errorMsg, QObject *parent = nullptr);

public slots:
    void setStatusCode(StatusCode* statusCode);
    void setErrorMsg(QString errorMsg);
    StatusCode* getStatusCode();
    QString getErrorMsg();
    void finalizeMessageObject();

signals:

};

#endif // SERVERMESSAGE_H
