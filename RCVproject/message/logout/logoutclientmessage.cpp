
#include "logoutclientmessage.h"

QString LogoutClientMessage::getUsername() const
{
    return username;
}

void LogoutClientMessage::setUsername(const QString &newUsername)
{
    username = newUsername;
}

LogoutClientMessage::LogoutClientMessage(QObject *parent)
    : ClientMessage{parent}
{

}

LogoutClientMessage::LogoutClientMessage(quint64 id, QString username, QObject *parent)
    : ClientMessage{parent}
{
    this->id = id;
    this->username = username;
    this->addCommandCode(command->toCommand("LOGOUT"));
    this->requestBody->createLogoutBody(id, username);
    this->finalizeMessageObject();
}

LogoutClientMessage::LogoutClientMessage(QString input, QObject *parent)
    : ClientMessage{input, parent}
{
    this->id = this->requestBody->getRequestBody().value("id").toInt();
    this->username = this->requestBody->getRequestBody().value("username").toString();
}
