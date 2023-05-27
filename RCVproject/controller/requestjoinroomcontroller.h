
#ifndef CREATEJOINROOMCONTROLLER_H
#define CREATEJOINROOMCONTROLLER_H


#include <QObject>
#include "userapi.h"

class CreateJoinRoomController : public QObject
{
    Q_OBJECT
private:
    UserAPI* userAPI;

public:
    explicit CreateJoinRoomController(QObject *parent = nullptr);

public slots:
    void addUserToRoom();


signals:

};

#endif // CREATEJOINROOMCONTROLLER_H
