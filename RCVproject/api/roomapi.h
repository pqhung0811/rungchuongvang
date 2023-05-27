
#ifndef ROOMAPI_H
#define ROOMAPI_H


#include <QObject>
#include <QList>
#include <QtSql/QSqlDatabase>
#include <room.h>
#include "userapi.h"

class RoomAPI : public QObject
{
    Q_OBJECT
public:
    explicit RoomAPI(QObject *parent = nullptr);

public slots:
    QList<Room*> getRoomsByStatusAndLevel(quint64 status, quint64 level);
    void addRoom(quint64 ownerId, QString roomname, quint64 level);
    Room* getLastRoom();

signals:

};

#endif // ROOMAPI_H
