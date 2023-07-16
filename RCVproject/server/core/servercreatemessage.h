
#ifndef SERVERCREATEMESSAGE_H
#define SERVERCREATEMESSAGE_H


#include <QObject>
#include "requestprocessing.h"
#include "login/loginservermessage.h"
#include "logout/logoutservermessage.h"
#include "register/registerservermessage.h"
#include "findroom/findroomservermessage.h"
#include "viewrank/viewrankservermessage.h"
#include "startgame/startgameservermessage.h"
#include "viewhistory/viewhistoryservermessage.h"
#include "checkfinish/checkfinishservermessage.h"
#include "requestjoinroom/requestjoinroomservermessage.h"
#include "requestjoinroom/responsejoinroomservermessage.h"
#include "afkgame/afkgameservermessage.h"
#include "history.h"
#include "noinfomessage.h"
#include "room.h"
#include "QList"

class ServerCreateMessage : public QObject
{
    Q_OBJECT
private:
    RequestProcessing* requestProcessing;

public:
    explicit ServerCreateMessage(QObject *parent = nullptr);

    RequestProcessing *getRequestProcessing() const;
    void setRequestProcessing(RequestProcessing *newRequestProcessing);

public slots:
    QString createMessage(QString msg);
    QString createDenyResponseJoinRoomMessage(quint64 userId, quint8 reply);
    QString createAcceptResponseJoinRoomMessage(QString username, quint64 rankscore);
    QString createResponseJoinRoomMessage(quint64 userId, QString roomname, quint8 reply, QList<User*> users);

signals:

};

#endif // SERVERCREATEMESSAGE_H
