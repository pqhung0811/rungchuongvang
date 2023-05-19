
#include "userapitest.h"
#include <QtTest>
#include "user.h"

UserApiTest::UserApiTest(QObject *parent) : QObject(parent)
{

}

void UserApiTest::setConnectionTest() {
    this->connection = new Connection();
    QCOMPARE(connection->setConnection(), true);
}

//void UserApiTest::getUserByNameAndPassTest() {
//    this->userAPI = new UserAPI();
//    QList<User*> listUser;
//    listUser = userAPI->getUserByNameAndPass("jinx", "123");
//    QCOMPARE(user->getUsername(), "jinx");
//}

//QTEST_MAIN(UserApiTest)

