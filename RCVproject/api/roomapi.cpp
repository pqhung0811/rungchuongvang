
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
    query.prepare("SELECT * from room WHERE status = :status and level = :level");
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
        qDebug() << "id: " << id;
        room->setId(id);
        room->setRoomname(roomname);
        room->setStartTime(starttime);
        room->setEndTime(endtime);
        room->setstatus(status);
        room->setLevel(level);
        qDebug() << "ids: " << room->getId();
        listRoom.append(room);
    }
    return listRoom;

}
