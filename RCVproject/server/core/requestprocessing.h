
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
#include "roomapi.h"
#include "questionapi.h"
#include <QList>

class RequestProcessing : public QObject
{
    Q_OBJECT
private:
    QJsonObject message;
    User* user;
    Room* room;
    QString ouputMsg;
    QList<Room*> rooms;
    QList<User*> users;

public:
    explicit RequestProcessing(QObject *parent = nullptr);

    QJsonObject getMessage() const;
    void setMessage(const QJsonObject &newMessage);

    Room *getRoom() const;
    void setRoom(Room *newRoom);

    User *getUser() const;
    void setUser(User *newUser);

    QString getOuputMsg() const;
    void setOuputMsg(const QString &newOuputMsg);

    QList<Room *> getRooms() const;
    void setRooms(const QList<Room *> &newRooms);

    QList<User *> getUsers() const;
    void setUsers(const QList<User *> &newUsers);

public slots:
    QString handle();
    QString login();
    QString logout();
    QString registers();
    QString createRoom();
    QList<Room*> findRoom();
    QString requestJoinRoom();
    QString responseJoinRoom();
    QList<User*> viewRank();
    QList<Question*> startGame();

signals:

};

#endif // REQUESTPROCESSING_H
