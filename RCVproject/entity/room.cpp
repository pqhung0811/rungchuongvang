
#include "room.h"

quint64 Room::getId() const
{
    return id;
}

void Room::setId(quint64 newId)
{
    id = newId;
}

QString Room::getRoomname() const
{
    return roomname;
}

void Room::setRoomname(const QString &newRoomname)
{
    roomname = newRoomname;
}

User *Room::getOwner() const
{
    return owner;
}

void Room::setOwner(User *newOwner)
{
    owner = newOwner;
}

QString Room::getStartTime() const
{
    return startTime;
}

void Room::setStartTime(const QString &newStartTime)
{
    startTime = newStartTime;
}

QString Room::getEndTime() const
{
    return endTime;
}

void Room::setEndTime(const QString &newEndTime)
{
    endTime = newEndTime;
}

QMap<User *, quint64> Room::getUserAndPoint() const
{
    return userAndPoint;
}

void Room::setUserAndPoint(const QMap<User *, quint64> &newUserAndPoint)
{
    userAndPoint = newUserAndPoint;
}

quint64 Room::getStatus() const
{
    return status;
}

void Room::setStatus(quint64 newStatus)
{
    status = newStatus;
}

quint64 Room::getLevel() const
{
    return level;
}

void Room::setLevel(quint64 newLevel)
{
    level = newLevel;
}

QList<Question *> Room::getListQuestions() const
{
    return listQuestions;
}

void Room::setListQuestions(const QList<Question *> &newListQuestions)
{
    listQuestions = newListQuestions;
}

void Room::updateUser(User *user, quint64 point)
{
    this->userAndPoint.insert(user, point);
}

Room::Room(QObject *parent)
    : QObject{parent}
{

}

//quint64 Room::getId() {
//    return this->id;
//}

//QString Room::getRoomname() {
//    return this->roomname;
//}

//User* Room::getOwner() {
//    return this->owner;
//}

//QString Room::getStartTime() {
//    return this->startTime;
//}

//QString Room::getEndTime() {
//    return this->endTime;
//}

//quint64 Room::getStatus() {
//    return this->status;
//}

//quint64 Room::getLevel() {
//    return this->level;
//}

//QMap<User*, quint64> Room::getUserAndPoint() {
//    return this->getUserAndPoint();
//}

//void Room::setId(quint64 id) {
//    this->id = id;
//}

//void Room::setRoomname(QString name) {
//    this->roomname = name;
//}

//void Room::setOwner(User* user) {
//    this->owner = user;
//}

//void Room::setStartTime(QString starttime) {
//    this->startTime = starttime;
//}

//void Room::setEndTime(QString endtime) {
//    this->endTime = endtime;
//}

//void Room::setUserAndPoint(QMap<User*, quint64> userAndPoint) {
//    this->userAndPoint = userAndPoint;
//}

//void Room::setstatus(quint64 status) {
//    this->status = status;
//}

//void Room::setLevel(quint64 level) {
//    this->level = level;
//}

