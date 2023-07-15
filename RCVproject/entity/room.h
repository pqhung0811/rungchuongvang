#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <QTime>
#include <QMap>
#include <QHash>
#include "user.h"
#include "question.h"

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
    QList<Question*> listQuestions;

public:
    explicit Room(QObject *parent = nullptr);

    quint64 getId() const;
    void setId(quint64 newId);

    QString getRoomname() const;
    void setRoomname(const QString &newRoomname);

    User *getOwner() const;
    void setOwner(User *newOwner);

    QString getStartTime() const;
    void setStartTime(const QString &newStartTime);

    QString getEndTime() const;
    void setEndTime(const QString &newEndTime);

    QMap<User *, quint64> getUserAndPoint() const;
    void setUserAndPoint(const QMap<User *, quint64> &newUserAndPoint);

    quint64 getStatus() const;
    void setStatus(quint64 newStatus);

    quint64 getLevel() const;
    void setLevel(quint64 newLevel);

    QList<Question *> getListQuestions() const;
    void setListQuestions(const QList<Question *> &newListQuestions);

    void updateUser(User* user, quint64 point);
public slots:
//    quint64 getId();
//    QString getRoomname();
//    User* getOwner();
//    QString getStartTime();
//    QString getEndTime();
//    QMap<User*, quint64> getUserAndPoint();
//    quint64 getStatus();
//    quint64 getLevel();
//    void setId(quint64 id);
//    void setRoomname(QString name);
//    void setOwner(User* user);
//    void setStartTime(QString starttime);
//    void setEndTime(QString endtime);
//    void setUserAndPoint(QMap<User*, quint64> userAndPoint);
//    void setstatus(quint64 status);
//    void setLevel(quint64 level);

signals:
};

#endif // ROOM_H
