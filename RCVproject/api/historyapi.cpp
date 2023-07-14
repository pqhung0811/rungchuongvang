
#include "historyapi.h"

HistoryAPI::HistoryAPI(QObject *parent)
    : QObject{parent}
{

}

QList<History *> HistoryAPI::getHistoryByUserId(quint64 userId)
{
    QList<History*> listHistory;
    QSqlQuery query;
    query.prepare("SELECT * FROM history WHERE user_id = :userid");
    query.bindValue(":userid", userId);
    if (!query.exec()) {
        qDebug() << "Can not query";
    }
    while (query.next()) {
        History* history = new History();
        quint64 top = query.value(1).toInt();
        quint64 score = query.value(2).toInt();
        QString startgame = query.value(3).toString();
        QString endgame = query.value(4).toString();
        history->setTop(top);
        history->setScore(score);
        history->setStartgame(startgame);
        history->setEndgame(endgame);
        listHistory.append(history);
    }
    return listHistory;
}

quint64 HistoryAPI::getScoreByUserId(quint64 userId)
{
    QSqlQuery query;
    query.prepare("SELECT score FROM history WHERE user_id = :userId ORDER by id DESC LIMIT 1");
    query.bindValue(":userid", userId);
    if (!query.exec()) {
        qDebug() << "Can not query";
    }
    while (query.next()) {
        quint64 score = query.value(0).toInt();
        return score;
    }
}

void HistoryAPI::updateHistory(quint64 userId, quint64 score, QString startgame, QString endgame)
{
    QSqlQuery query;
    query.prepare("INSERT INTO history (score, startgame, endgame, user_id) VALUES (:score, :startgame, :endgame, :userid)");
    query.bindValue(":score", score);
    query.bindValue(":startgame", startgame);
    query.bindValue(":endgame", endgame);
    query.bindValue(":userid", userId);
    if (!query.exec()) {
        qDebug() << "Can not query";
    }
}

