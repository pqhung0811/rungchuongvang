
#ifndef REQUESTPROCESSING_H
#define REQUESTPROCESSING_H


#include <QObject>
#include <QJsonObject>
#include <QJsonDocument>
#include "logincontroller.h"
#include "user.h"
#include "room.h"
#include "registercontroller.h"
#include "createroomcontroller.h"
#include "requestjoinroomcontroller.h"

class RequestProcessing : public QObject
{
    Q_OBJECT
private:
    QJsonObject message;
    User* user;
    Room* room;

public:
    explicit RequestProcessing(QObject *parent = nullptr);

    QJsonObject getMessage() const;
    void setMessage(const QJsonObject &newMessage);

    Room *getRoom() const;
    void setRoom(Room *newRoom);

    User *getUser() const;
    void setUser(User *newUser);

public slots:
    QString handle();
    QString login();
    QString logout();
    QString registers();
    QString createRoom();
    QString requestJoinRoom();
    QString responseJoinRoom();


signals:

};

#endif // REQUESTPROCESSING_H
