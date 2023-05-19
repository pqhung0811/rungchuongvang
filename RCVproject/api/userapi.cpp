
#include "userapi.h"
#include <QtSql/QSqlQuery>
#include "user.h"
#include "connection.h"
#include <QSqlDriver>

UserAPI::UserAPI(QObject *parent)
    : QObject{parent}
{

}

QList<User*> UserAPI::getAllUsers() {
    QList<User*> listUser;
    QSqlQuery query;
    query.prepare("Select id, username, password from user");
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        User* user = new User();
        quint64 id = query.value(0).toInt();
        QString username = query.value(1).toString();
        QString password = query.value(2).toString();
        qDebug() << "id: " << id;
        qDebug() << "username: " << username << "\n";
        user->setId(id);
        qDebug() << "id of user: " << user->getId();
        user->setUsername(username);
        user->setPassword(password);
        listUser.append(user);
        qDebug() << "id:" << id << "username:" << username << "password:" << password;
    }
    return listUser;
}

User* UserAPI::getUserByNameAndPass(QString name, QString pass) {
    User* user = new User();
    QSqlQuery query;
    QString sqlQuery = "SELECT id, username, password FROM user WHERE username = :username AND password = :password";
    query.prepare(sqlQuery);
    query.bindValue(":username", name);
    query.bindValue(":password", pass);

    if(!query.exec()) {
        qDebug() << "can not query";
    }

    while(query.next()){
        quint64 id = query.value(0).toInt();
        qDebug() << "id: " << id;
        QString username1 = query.value(1).toString();
        QString password1 = query.value(2).toString();
        quint64 ranked1 = query.value(3).toInt();
        quint64 rankscore1 = query.value(4).toInt();
        qDebug() << "The value of id is: " << id;
        // xử lí dữ liệu như bạn muốn ở đây
        user->setId(id);
        user->setUsername(username1);
        user->setPassword(password1);
        user->setRank(ranked1);
        user->setRankScore(rankscore1);
        qDebug() << "user id: " << user->getId();
    }

    return user;
}

void UserAPI::addUser(QString name, QString pass) {
    QSqlQuery query;
    QString sqlQuery = "INSERT INTO user (username, password, ranked, rank_score) VALUES (:username, :password, :ranked, :rankscore)";
    query.prepare(sqlQuery);
    query.bindValue(":username", name);
    query.bindValue(":password", pass);
    query.bindValue(":ranked", 0);
    query.bindValue(":rankscore", 0);

    if(!query.exec()) {
        qDebug() << "can not query";
    }
}

QList<QString> UserAPI::getAllUsernames() {
    QList<QString> listUsername;
    QSqlQuery query;
    query.prepare("Select username from user");
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        QString username = query.value(0).toString();
        listUsername.append(username);
        qDebug() << "username:" << username;
    }
    return listUsername;
}

User* UserAPI::getUserbyUsername(QString name) {
    QSqlQuery query;
    User* user = new User();
    QString sqlQuery = "Select * from user where username = :username";
    query.prepare(sqlQuery);
    query.bindValue(":username", name);
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        quint64 id = query.value(0).toInt();
        QString username = query.value(1).toString();
        QString password = query.value(2).toString();
        quint64 ranked = query.value(3).toInt();
        quint64 rankscore = query.value(4).toInt();
        user->setId(id);
        user->setUsername(username);
        user->setPassword(password);
        user->setRank(ranked);
        user->setRankScore(rankscore);
    }
    return user;

}

User* UserAPI::getUserbyId(quint64 id) {
    QSqlQuery query;
    User* user = new User();
    QString sqlQuery = "Select * from user where id = :id LIMIT 1";
    query.prepare(sqlQuery);
    query.bindValue(":id", id);
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        quint64 id = query.value(0).toInt();
        QString username = query.value(1).toString();
        QString password = query.value(2).toString();
        quint64 ranked = query.value(3).toInt();
        quint64 rankscore = query.value(4).toInt();
        user->setId(id);
        user->setUsername(username);
        user->setPassword(password);
        user->setRank(ranked);
        user->setRankScore(rankscore);
    }
    return user;
}

void UserAPI::updateRankscoreAndRanked(quint64 rankscore, quint64 ranked, quint64 id) {
    QSqlQuery query;
    QString sqlQuery = "UPDATE user SET ranked = :ranked, rank_score = :rankscore WHERE id = :id";
    query.prepare(sqlQuery);
    query.bindValue(":ranked", ranked);
    query.bindValue(":rankscore", rankscore);
    query.bindValue(":id", id);

    if(!query.exec()) {
        qDebug() << "can not query";
    }
}
