
#include "createroomcontroller.h"

Room *CreateRoomController::getRoom() const
{
    return room;
}

void CreateRoomController::setRoom(Room *newRoom)
{
    room = newRoom;
}

User *CreateRoomController::getOwner() const
{
    return owner;
}

void CreateRoomController::setOwner(User *newOwner)
{
    owner = newOwner;
}

CreateRoomController::CreateRoomController(QObject *parent)
    : QObject{parent}
{
    this->roomAPI = new RoomAPI();
}

QString CreateRoomController::createRoom(QString roomname) {
    this->roomAPI->addRoom(this->owner->getId(), roomname, this->owner->getRank());
    this->room = this->roomAPI->getLastRoom();
    QMap<User *, quint64> userAndPoints;
    this->room->setOwner(this->owner);
    userAndPoints.insert(this->owner, 0);
    this->room->setUserAndPoint(userAndPoints);
    UserAPI* userAPI = new UserAPI();
    userAPI->updateRoomId(this->room->getId(), this->owner->getId());
    return "create room successfully";
}
