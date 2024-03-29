
#ifndef LOGINCONTROLLER_H
#define LOGINCONTROLLER_H


#include <QObject>
#include <QDebug>
#include "user.h"
#include "userapi.h"


class LoginController : public QObject
{
    Q_OBJECT
private:
    UserAPI* userAPI;
    User* user;

public:
    explicit LoginController(QObject *parent = nullptr);

    User *getUser() const;
    void setUser(User *newUser);

public slots:
    QString checkLogin(QString username, QString password);
    bool checkUsername(QString username);

signals:

};

#endif // LOGINCONTROLLER_H
