
#include "room.h"

Room::Room(QObject *parent)
    : QObject{parent}
{

}

quint64 Room::getId() {
    return this->id;
}

QString Room::getRoomname() {
    return this->roomname;
}

User* Room::getOwner() {
    return this->owner;
}

QString Room::getStartTime() {
    return this->startTime;
}

QString Room::getEndTime() {
    return this->endTime;
}

quint64 Room::getStatus() {
    return this->status;
}

quint64 Room::getLevel() {
    return this->level;
}

QMap<User*, quint64> Room::getUserAndPoint() {
    return this->getUserAndPoint();
}

void Room::setId(quint64 id) {
    this->id = id;
}

void Room::setRoomname(QString name) {
    this->roomname = name;
}

void Room::setOwner(User* user) {
    this->owner = user;
}

void Room::setStartTime(QString starttime) {
    this->startTime = starttime;
}

void Room::setEndTime(QString endtime) {
    this->endTime = endtime;
}

void Room::setUserAndPoint(QMap<User*, quint64> userAndPoint) {
    this->userAndPoint = userAndPoint;
}

void Room::setstatus(quint64 status) {
    this->status = status;
}

void Room::setLevel(quint64 level) {
    this->level = level;
}

