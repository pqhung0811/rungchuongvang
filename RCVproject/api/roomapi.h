
#ifndef ROOMAPI_H
#define ROOMAPI_H


#include <QObject>
#include <QList>
#include <room.h>

class RoomAPI : public QObject
{
    Q_OBJECT
public:
    explicit RoomAPI(QObject *parent = nullptr);

public slots:
    QList<Room*> getRoomsByStatusAndLevel(quint64 status, quint64 level);

signals:

};

#endif // ROOMAPI_H
