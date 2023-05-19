
#include "loginservermessage.h"

void LoginServerMessage::setUsername(const QString &newUsername)
{
    username = newUsername;
}

void LoginServerMessage::setId(quint64 newId)
{
    id = newId;
}

LoginServerMessage::LoginServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

LoginServerMessage::LoginServerMessage(quint64 id, QString username, QString password, quint64 ranked, quint64 rankScore, QString status, QString errorMsg, QObject *parent)
    : ServerMessage(status, errorMsg, parent)
{
    this->username = username;
    this->password = password;
    this->id = id;
    this->ranked = ranked;
    this->rankScore = rankScore;
    this->addCommandCode(this->command->toCommand("LOGIN"));
    this->responseBody->createLoginBody(id, username, password, ranked, rankScore);
    qDebug() << "ressponse: " << this->responseBody->getResponseBody();
    this->finalizeMessageObject();
}

LoginServerMessage::LoginServerMessage(QString input, QObject *parent)
    : ServerMessage(input, parent)
{
    this->username = this->responseBody->getResponseBody().value("username").toString();
    this->password = this->responseBody->getResponseBody().value("password").toString();
    this->id = this->responseBody->getResponseBody().value("id").toInteger();
    this->ranked = this->responseBody->getResponseBody().value("ranked").toInteger();
    this->rankScore = this->responseBody->getResponseBody().value("rankScore").toInteger();
}

quint64 LoginServerMessage::getId() {
    return this->id;
}

QString LoginServerMessage::getUsername() {
    return this->username;
}

QString LoginServerMessage::getPassword() {
    return this->password;
}

quint64 LoginServerMessage::getRanked() {
    return this->ranked;
}

quint64 LoginServerMessage::getRankScore() {
    return this->rankScore;
}
