
#ifndef REQUESTJOINROOMCONTROLLER_H
#define REQUESTJOINROOMCONTROLLER_H


#include <QObject>
#include "userapi.h"

class RequestJoinRoomController : public QObject
{
    Q_OBJECT
private:
    UserAPI* userAPI;
    User* user;

public:
    explicit RequestJoinRoomController(QObject *parent = nullptr);

    User *getUser() const;
    void setUser(User *newUser);

public slots:
    QString requestJoin();
    QString responseJoin(quint64 userId, quint64 roomId, quint8 reply);


signals:

};

#endif // REQUESTJOINROOMCONTROLLER_H
