
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
    this->requestBody = QJsonObject();

    this->requestBody.insert("username", username);
    this->requestBody.insert("password", password);
}

void RequestBody::createLogoutBody(quint64 id, QString username) {
    this->requestBody = QJsonObject();

    this->requestBody.insert("id", QString::number(id));
    this->requestBody.insert("username", username);
}

void RequestBody::createRegisterBody(QString username, QString password) {
    this->requestBody = QJsonObject();

    this->requestBody.insert("username", username);
    this->requestBody.insert("password", password);
}

//void RequestBody::createCreateRoomBody(QString roomname, quint64 ownerId, QString username, quint64 ranked, quint64 rankScore) {
//    this->requestBody = QJsonObject();

//    this->requestBody.insert("roomname", roomname);
//    this->requestBody.insert("ownerId", QString::number(ownerId));
//    this->requestBody.insert("username", username);
//    this->requestBody.insert("ranked", QString::number(ranked));
//    this->requestBody.insert("rankScore", QString::number(rankScore));
//}

void RequestBody::createCreateRoomBody(QString roomname) {
    this->requestBody = QJsonObject();

    this->requestBody.insert("roomname", roomname);
}


void RequestBody::createRequestJoinRoomBody(quint64 userId, quint64 roomId) {
    this->requestBody = QJsonObject();

    this->requestBody.insert("userId", QString::number(userId));
    this->requestBody.insert("roomId", QString::number(roomId));
}

void RequestBody::createResponseJoinRoomBody(quint64 userId, quint64 roomId, quint8 reply) {
    this->requestBody = QJsonObject();

    this->requestBody.insert("userId", QString::number(userId));
    this->requestBody.insert("roomId", QString::number(roomId));
    this->requestBody.insert("reply", QString::number(reply));
}

void RequestBody::createStartGameBody(quint64 noQuestion)
{
    this->requestBody = QJsonObject();

    this->requestBody.insert("noQuestion", QString::number(noQuestion));
}


