
#ifndef USERAPITEST_H
#define USERAPITEST_H

#include "userapi.h"
#include <QObject>
#include <QtTest/QtTest>
#include "connection.h"

class UserApiTest : public QObject
{
    Q_OBJECT

private:
    UserAPI* userAPI;
    Connection* connection;

public:
    explicit UserApiTest(QObject *parent = nullptr);

private slots:
    void setConnectionTest();
//    void getUserByNameAndPassTest();
};

#endif // USERAPITEST_H
