
#include "responsebody.h"

ResponseBody::ResponseBody(QObject *parent)
    : QObject{parent}
{

}

QJsonObject ResponseBody::getResponseBody() {
    return this->responseBody;
}

void ResponseBody::setResponseBody(QJsonObject responseBody) {
    this->responseBody = responseBody;
}

void ResponseBody::createLoginBody(quint64 id, QString username, quint64 ranked, quint64 rankScore) {
    this->responseBody = QJsonObject();

    this->responseBody.insert("id", QString::number(id));
    this->responseBody.insert("username", username);
    this->responseBody.insert("ranked", QString::number(ranked));
    this->responseBody.insert("rankscore", QString::number(rankScore));
}

void ResponseBody::createLogoutBody(quint64 id, QString username) {
    this->responseBody = QJsonObject();

    this->responseBody.insert("id", QString::number(id));
    this->responseBody.insert("username", username);
}

void ResponseBody::createFindRoomBody(QList<quint64> roomIds, QList<QString> roomnames)
{
    this->responseBody = QJsonObject();

    QJsonArray idArray;
    for (quint64 roomId : roomIds) {
        idArray.append(static_cast<qint64>(roomId));
    }
//    responseBody["id"] = idArray;
    this->responseBody.insert("id", idArray);
    qDebug() << "id: " << idArray;

    QStringList roomnameList;
    for (const QString& roomname : roomnames) {
        roomnameList << roomname;
    }
    QString roomnamesString = roomnameList.join(" ");
    this->responseBody.insert("roomname", roomnamesString);
//    responseBody["roomname"] = roomnamesString;
}

