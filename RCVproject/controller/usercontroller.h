
#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H


#include <QObject>
#include "userapi.h"
#include "user.h"

class UserController : public QObject
{
    Q_OBJECT

private:
protected:
    User* user;

public:
    explicit UserController(QObject *parent = nullptr);

public slots:
    void loginController(QString username, QString password);
    bool registerController(QString username, QString password);

signals:

};

#endif // USERCONTROLLER_H
