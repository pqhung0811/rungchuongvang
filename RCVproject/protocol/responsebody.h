
#ifndef RESPONSEBODY_H
#define RESPONSEBODY_H


#include <QObject>
#include <QJsonObject>
#include <QList>
#include <QJsonArray>
#include <QStringList>
#include "question.h"
#include "answer.h"

class ResponseBody : public QObject
{
    Q_OBJECT
private:
    QJsonObject responseBody;
public:
    explicit ResponseBody(QObject *parent = nullptr);

public slots:
    void setResponseBody(QJsonObject responseBody);
    QJsonObject getResponseBody();
    void createLoginBody(quint64 id, QString username, quint64 ranked, quint64 rankScore);
    void createLogoutBody(quint64 id, QString username);
    void createFindRoomBody(QList<quint64> roomIds, QList<QString> roomnames);
    void createCreateRoomBody(QString username, quint64 ranked, quint64 rankScore);
    void createViewRankBody(QList<quint64> userIds, QList<QString> usernames, QList<quint64> ranked, QList<quint64> rankScore);
    void createQuestionBody(QList<Question*> questions);
    void createViewHistoryBody(QList<quint64> tops, QList<quint64> scores, QList<QString> startgames, QList<QString> endgames);
    void createFinishBody(QList<QString> usernames, QList<quint64> scores);

signals:

};

#endif // RESPONSEBODY_H
