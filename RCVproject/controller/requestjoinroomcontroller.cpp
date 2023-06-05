
#include "requestjoinroomcontroller.h"

RequestJoinRoomController::RequestJoinRoomController(QObject *parent)
    : QObject{parent}
{

}

QString RequestJoinRoomController::requestJoin() {
    return "requestjoin";
}

QString RequestJoinRoomController::responseJoin(quint64 userId, quint64 roomId, quint8 reply) {
    QString msg;
    if(reply == 0) {
        msg = "deny " + QString::number(userId);
    }
    else {
        this->userAPI->updateRoomId(roomId, userId);
        msg = "accept " + QString::number(userId);;
    }
}
