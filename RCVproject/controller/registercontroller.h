
#ifndef REGISTERCONTROLLER_H
#define REGISTERCONTROLLER_H


#include <QObject>
#include <userapi.h>

class RegisterController : public QObject
{
    Q_OBJECT
private:
    UserAPI* userAPI;

public:
    explicit RegisterController(QObject *parent = nullptr);

public slots:
    QString createRgister(QString username, QString password);
    bool checkUsername(QString username);

signals:

};

#endif // REGISTERCONTROLLER_H
