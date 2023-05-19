
#include "usercontroller.h"

UserController::UserController(QObject *parent)
    : QObject{parent}
{

}

void UserController::loginController(QString username, QString password) {
    UserAPI* userAPI = new UserAPI();
    User* user = new User();
    user = userAPI->getUserByNameAndPass(username, password);
    this->user = user;
}

bool UserController::registerController(QString username, QString password) {
    UserAPI* userAPI = new UserAPI();
    QList<QString> listUsername;
    listUsername = userAPI->getAllUsernames();
    if(listUsername.contains(username)) {
        return false;
    }
    userAPI->addUser(username, password);
    return true;
}
