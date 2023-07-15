
#include "requestjoinroomcontroller.h"

User *RequestJoinRoomController::getUser() const
{
    return user;
}

void RequestJoinRoomController::setUser(User *newUser)
{
    user = newUser;
}

RequestJoinRoomController::RequestJoinRoomController(QObject *parent)
    : QObject{parent}
{
    this->userAPI = new UserAPI();
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
        msg = "accept " + QString::number(userId);
        this->user = userAPI->getUserbyId(userId);
    }
    return msg;
}

