
#include "logoutservermessage.h"

LogoutServerMessage::LogoutServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

LogoutServerMessage::LogoutServerMessage(QString input, QObject *parent)
    : ServerMessage{input, parent}
{
    this->username = this->responseBody->getResponseBody().value("username").toString();
}

LogoutServerMessage::LogoutServerMessage(quint64 id, QString username, QString status, QString errorMsg, QObject *parent)
    : ServerMessage{status, errorMsg, parent}
{
    this->id = id;
    this->username = username;
    this->addCommandCode(this->command->toCommand("LOGOUT"));
    this->responseBody->createLogoutBody(id, username);
    this->finalizeMessageObject();
}
