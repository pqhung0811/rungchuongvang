
#include "user.h"

User::User(QObject *parent)
    : QObject{parent}
{

}

quint64 User::getId() {
    return this->id;
}

QString User::getUsername() {
    return this->username;
}

QString User::getPassword() {
    return this->password;
}

quint64 User::getRankScore() {
    return this->rankScore;
}

quint64 User::getRank() {
    return this->rank;
}

void User::setId(quint64 id) {
    this->id = id;
}

void User::setUsername(QString username) {
    this->username = username;
}

void User::setPassword(QString password) {
    this->password = password;
}

void User::setRank(quint64 rank) {
    this->rank = rank;
}

void User::setRankScore(quint64 rankScore) {
    this->rankScore = rankScore;
}
