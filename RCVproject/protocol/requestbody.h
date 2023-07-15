
#ifndef REQUESTBODY_H
#define REQUESTBODY_H


#include <QObject>
#include <QJsonObject>

class RequestBody : public QObject
{
    Q_OBJECT

private:
    QJsonObject requestBody;

public:
    explicit RequestBody(QObject *parent = nullptr);

public slots:
    QJsonObject getRequestBody();
    void setRequestBody(QJsonObject body);
    void createLoginBody(QString username, QString password);
    void createLogoutBody(quint64 id, QString username);
    void createRegisterBody(QString username, QString password);
//    void createCreateRoomBody(QString roomname, quint64 ownerId, QString username, quint64 ranked, quint64 rankScore);
    void createCreateRoomBody(QString roomname);
    void createRequestJoinRoomBody(quint64 roomId);
    void createResponseJoinRoomBody(quint64 userId, quint8 reply);
    void createStartGameBody(quint64 noQuestion);
    void createCheckFinishBody(quint64 score);

signals:

};

#endif // REQUESTBODY_H
