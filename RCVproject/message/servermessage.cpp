
#include "servermessage.h"

ServerMessage::ServerMessage(QObject *parent)
    : Message{parent}
{

}

ServerMessage::ServerMessage(QString status, QString errorMsg, QObject *parent)
    : Message{parent}
{
    this->responseBody = new ResponseBody();
    this->statusCode = new StatusCode();
    this->statusCode->toStatusCode(status);
    this->errorMsg = errorMsg;
}

ServerMessage::ServerMessage(QString input, QObject *parent)
    : Message{input, parent}
{
    this->responseBody = new ResponseBody();
    if (this->messageBody.contains("info")) {
        QJsonValue infoValue = messageBody.value("info");
        if (infoValue.isObject()) {
            QJsonObject infoObject1 = infoValue.toObject();
            // Thực hiện các thao tác với infoObject ở đây
            this->responseBody->setResponseBody(infoObject1);
        }
    }
    if (this->messageBody.contains("status_code")) {
        QJsonValue infoValue = messageBody.value("status_code");
        if (infoValue.isObject()) {
            QJsonObject infoObject2 = infoValue.toObject();
            QString jsonString = QJsonDocument(infoObject2).toJson(QJsonDocument::Compact);
            // Thực hiện các thao tác với infoObject ở đây
            this->statusCode->toStatusCode(jsonString);
        }
    }
    if (this->messageBody.contains("error")) {
        QJsonValue infoValue = messageBody.value("error");
        if (infoValue.isObject()) {
            QJsonObject infoObject3 = infoValue.toObject();
            QString jsonString = QJsonDocument(infoObject3).toJson(QJsonDocument::Compact);
            // Thực hiện các thao tác với infoObject ở đây
            this->errorMsg = jsonString;
        }
    }
}

void ServerMessage::finalizeMessageObject() {
    QJsonDocument jsonDocument(this->responseBody->getResponseBody());
    QString jsonString = jsonDocument.toJson(QJsonDocument::Compact);
    this->messageBody.insert("info", jsonString);
    this->messageBody.insert("status_code", this->statusCode->getStatusCodeString());
    this->messageBody.insert("error", this->errorMsg);
}

QString ServerMessage::getErrorMsg() {
    return this->errorMsg;
}

StatusCode* ServerMessage::getStatusCode() {
    return this->statusCode;
}

void ServerMessage::setErrorMsg(QString errorMsg) {
    this->errorMsg = errorMsg;
}

void ServerMessage::setStatusCode(StatusCode *statusCode) {
    this->statusCode = statusCode;
}

