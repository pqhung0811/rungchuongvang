
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

    QJsonArray roomnameList;
    for (const QString& roomname : roomnames) {
        roomnameList.append(roomname);
    }
    this->responseBody.insert("roomname", roomnameList);
    //    responseBody["roomname"] = roomnamesString;
}

void ResponseBody::createCreateRoomBody(QString username, quint64 ranked, quint64 rankScore)
{
    this->responseBody = QJsonObject();

    this->responseBody.insert("username", username);
    this->responseBody.insert("ranked", QString::number(ranked));
    this->responseBody.insert("rankscore", QString::number(rankScore));
}

void ResponseBody::createViewRankBody(QList<quint64> userIds, QList<QString> usernames, QList<quint64> ranked, QList<quint64> rankScore)
{
    this->responseBody = QJsonObject();

    QJsonArray idArray;
    for (quint64 userId : userIds) {
        idArray.append(static_cast<qint64>(userId));
    }
    //    responseBody["id"] = idArray;
    this->responseBody.insert("id", idArray);

    QJsonArray usernameList;
    for (const QString& username : usernames) {
        usernameList.append(username);
    }
    this->responseBody.insert("username", usernameList);
    //    responseBody["roomname"] = roomnamesString;

    QJsonArray rankArray;
    for (quint64 rank : ranked) {
        rankArray.append(static_cast<qint64>(rank));
    }
    //    responseBody["id"] = idArray;
    this->responseBody.insert("ranked", rankArray);

    QJsonArray rankScoreArray;
    for (quint64 rankscore : rankScore) {
        rankScoreArray.append(static_cast<qint64>(rankscore));
    }
    //    responseBody["id"] = idArray;
    this->responseBody.insert("rankScore", rankScoreArray);
}

void ResponseBody::createQuestionBody(QList<Question *> questions)
{
    this->responseBody = QJsonObject();
    QJsonArray jsonArrayQues;

    for(Question* question : questions) {
        QJsonObject jsonObQues = QJsonObject();
        QJsonArray jsonArrayAns;
        jsonObQues.insert("content", question->getContent());
        for(Answer* answer : question->getListAnswer())
        {
            QJsonObject jsonObAns = QJsonObject();
            jsonObAns.insert("content", answer->getContent());
            jsonObAns.insert("result", QString::number(answer->getResult()));
            jsonArrayAns.append(jsonObAns);
        }
        jsonObQues.insert("answer", jsonArrayAns);
        jsonArrayQues.append(jsonObQues);
    }
    this->responseBody.insert("question", jsonArrayQues);
}

