
#include "registercontroller.h"

RegisterController::RegisterController(QObject *parent)
    : QObject{parent}
{
    this->userAPI = new UserAPI();
}

bool RegisterController::checkUsername(QString username) {
    QList<QString> usernames = userAPI->getAllUsernames();
    if(usernames.contains(username)) {
        return false;
    }
    else return true;
}

QString RegisterController::createRgister(QString username, QString password) {
    if(!checkUsername(username)) {
        return "username exist";
    }
    else {
        this->userAPI->addUser(username, password);
        return "register successfully";
    }
}
