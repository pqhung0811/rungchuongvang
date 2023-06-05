
#ifndef REQUESTJOINROOMCONTROLLER_H
#define REQUESTJOINROOMCONTROLLER_H


#include <QObject>
#include "userapi.h"

class RequestJoinRoomController : public QObject
{
    Q_OBJECT
private:
    UserAPI* userAPI;

public:
    explicit RequestJoinRoomController(QObject *parent = nullptr);

public slots:
    QString requestJoin();
    QString responseJoin(quint64 userId, quint64 roomId, quint8 reply);


signals:

};

#endif // REQUESTJOINROOMCONTROLLER_H
