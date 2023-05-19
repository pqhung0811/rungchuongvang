#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <QTime>
#include <QMap>
#include <QHash>
#include "user.h"

class Room : public QObject
{
    Q_OBJECT
private:

protected:
    quint64 id;
    QString roomname;
    User* owner;
    QString startTime;
    QString endTime;
    QMap<User*, quint64> userAndPoint;
    quint64 status;
    quint64 level;

public:
    explicit Room(QObject *parent = nullptr);

public slots:
    quint64 getId();
    QString getRoomname();
    User* getOwner();
    QString getStartTime();
    QString getEndTime();
    QMap<User*, quint64> getUserAndPoint();
    quint64 getStatus();
    quint64 getLevel();
    void setId(quint64 id);
    void setRoomname(QString name);
    void setOwner(User* user);
    void setStartTime(QString starttime);
    void setEndTime(QString endtime);
    void setUserAndPoint(QMap<User*, quint64> userAndPoint);
    void setstatus(quint64 status);
    void setLevel(quint64 level);

signals:
};

#endif // ROOM_H
