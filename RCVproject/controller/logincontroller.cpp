
#include "logincontroller.h"

User *LoginController::getUser() const
{
    return user;
}

void LoginController::setUser(User *newUser)
{
    user = newUser;
}

LoginController::LoginController(QObject *parent)
    : QObject{parent}
{
    this->userAPI = new UserAPI();
}

QString LoginController::checkLogin(QString username, QString password) {
    if(!checkUsername(username))
    {
        return "invalid username";
    }
    else {
        User* anUser = this->userAPI->getUserByNameAndPass(username, password);
        qDebug() << "user login pass: " << anUser->getId();
        if(anUser->getId()==NULL || anUser->getId()==0) {
            return "invalid password";
        }
        else {
            this->user = anUser;
            qDebug() << "user login: " << this->user->getId();
            return "login successfully";
        }
    }
}

bool LoginController::checkUsername(QString username) {
    QList<QString> usernames;
    usernames = this->userAPI->getAllUsernames();
    if(usernames.contains(username))
    {
        return true;
    }
    else return false;
}


