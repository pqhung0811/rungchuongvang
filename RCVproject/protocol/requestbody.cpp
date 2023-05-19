
#include "requestbody.h"

RequestBody::RequestBody(QObject *parent)
    : QObject{parent}
{

}

QJsonObject RequestBody::getRequestBody() {
    return this->requestBody;
}

void RequestBody::setRequestBody(QJsonObject body) {
    this->requestBody = body;
}

void RequestBody::createLoginBody(QString username, QString password) {
    this->requestBody.remove("");

    this->requestBody.insert("username", username);
    this->requestBody.insert("password", password);
}

void RequestBody::createLogoutBody(quint64 id, QString username) {
    this->requestBody.remove("");

    this->requestBody.insert("id", QString::number(id));
    this->requestBody.insert("username", username);
}
