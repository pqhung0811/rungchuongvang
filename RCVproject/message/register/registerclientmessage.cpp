
#include "registerclientmessage.h"

RegisterClientMessage::RegisterClientMessage(QObject *parent)
    : ClientMessage{parent}
{

}

RegisterClientMessage::RegisterClientMessage(QString input, QObject *parent)
    : ClientMessage(input, parent)
{
    this->username = this->requestBody->getRequestBody().value("username").toString();
    this->password = this->requestBody->getRequestBody().value("password").toString();
}

RegisterClientMessage::RegisterClientMessage(QString username, QString password, QObject *parent)
    : ClientMessage(parent)
{
    this->username = username;
    this->password = password;

    this->addCommandCode(command->toCommand("REGISTER"));
    this->requestBody->createRegisterBody(username, password);
    qDebug() << "requesbody: " << this->requestBody->getRequestBody();

    this->finalizeMessageObject();
}
