
#include "roomapi.h"
#include "room.h"
#include <QtSql/QSqlQuery>

RoomAPI::RoomAPI(QObject *parent)
    : QObject{parent}
{

}

QList<Room*> RoomAPI::getRoomsByStatusAndLevel(quint64 status, quint64 level) {
    QList<Room*> listRoom;
    QSqlQuery query;
    query.prepare("SELECT * from room WHERE status = :status and level >= :level");
    query.bindValue(":status", status);
    query.bindValue(":level", level);

    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        Room* room = new Room();
        quint64 id = query.value(0).toInt();
        QString roomname = query.value(1).toString();
        QString starttime = query.value(2).toString();
        QString endtime = query.value(3).toString();
        quint64 status = query.value(4).toInt();
        quint64 level = query.value(5).toInt();
        room->setId(id);
        room->setRoomname(roomname);
        room->setStartTime(starttime);
        room->setEndTime(endtime);
        room->setStatus(status);
        room->setLevel(level);
        listRoom.append(room);
    }
    return listRoom;
}

Room* RoomAPI::getLastRoom() {
//    UserAPI* userAPI = new UserAPI();
    Room* room = new Room();
    QSqlQuery query;
    query.prepare("SELECT * FROM room ORDER BY id DESC LIMIT 1");

    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }

    while (query.next()) {
        quint64 id = query.value(0).toInt();
        QString roomname = query.value(1).toString();
        QString startTime = query.value(2).toString();
        QString endTime = query.value(3).toString();
        quint64 status = query.value(4).toInt();
        quint64 level = query.value(5).toInt();
//        quint64 owner = query.value(6).toInt();
        room->setId(id);
        room->setRoomname(roomname);
        room->setStartTime(startTime);
        room->setEndTime(endTime);
        room->setStatus(status);
        room->setLevel(level);
//        room->setOwner(userAPI->getUserbyId(owner));
//        QMap<User *, quint64> userAndPoints;
//        userAndPoints.insert(room->getOwner(), 0);
//        room->setUserAndPoint(userAndPoints);
    }
    return room;
}

void RoomAPI::addRoom(quint64 ownerId, QString roomname, quint64 level) {
    QSqlQuery query;
    QString sqlQuery = "INSERT INTO room (name, status, level, owner) VALUES (:name, :status, :level, :owner)";
    query.prepare(sqlQuery);
    query.bindValue(":name", roomname);
    query.bindValue(":status", 0);
    query.bindValue(":level", level);
    query.bindValue(":owner", ownerId);

    if(!query.exec()) {
        qDebug() << "can not query";
    }
}

quint64 RoomAPI::getOwnerIdByRoomId(quint64 roomId) {
    QSqlQuery query;
    quint64 ownerId;
    query.prepare("SELECT owner FROM room WHERE id = :roomId");
    query.bindValue(":roomId", roomId);
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }

    while (query.next()) {
        ownerId = query.value(0).toInt();
    }
    return ownerId;
}

void RoomAPI::updateStatusAndStarttime(quint64 id, quint64 status, QString starttime)
{
    QSqlQuery query;
    query.prepare("UPDATE room SET status = :status, start_time = :starttime WHERE id= :id");
    query.bindValue(":id", id);
    query.bindValue(":status", status);
    query.bindValue(":starttime", starttime);
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
}

void RoomAPI::updateStatusAndEndtime(quint64 id, quint64 status, QString endtime)
{
    QSqlQuery query;
    query.prepare("UPDATE room SET status = :status, end_time = :endtime WHERE id= :id");
    query.bindValue(":id", id);
    query.bindValue(":status", status);
    query.bindValue(":endtime", endtime);
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
}
