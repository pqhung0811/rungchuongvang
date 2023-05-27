
#ifndef CREATEROOMCONTROLLER_H
#define CREATEROOMCONTROLLER_H


#include <QObject>
#include "room.h"
#include "roomapi.h"
#include "userapi.h"
#include "user.h"
#include <QDateTime>
#include <QMap>

class CreateRoomController : public QObject
{
    Q_OBJECT
private:
    Room* room;
    RoomAPI* roomAPI;
    User* owner;

public:
    explicit CreateRoomController(QObject *parent = nullptr);

    Room *getRoom() const;
    void setRoom(Room *newRoom);

    User *getOwner() const;
    void setOwner(User *newOwner);

public slots:
    QString createRoom(QString roomname);

public slots:



signals:

};

#endif // CREATEROOMCONTROLLER_H
