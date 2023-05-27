
#ifndef LOGOUTCONTROLLER_H
#define LOGOUTCONTROLLER_H


#include <QObject>


class LogoutController : public QObject
{
    Q_OBJECT
public:
    explicit LogoutController(QObject *parent = nullptr);

signals:

};

#endif // LOGOUTCONTROLLER_H
