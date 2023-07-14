
#ifndef HISTORYAPI_H
#define HISTORYAPI_H


#include <QObject>
#include "QtSql/QSqlDatabase"
#include <QSqlQuery>
#include "history.h"

class HistoryAPI : public QObject
{
    Q_OBJECT
public:
    explicit HistoryAPI(QObject *parent = nullptr);

public slots:
    QList<History*> getHistoryByUserId(quint64 userId);
    quint64 getScoreByUserId(quint64 userId);
    void updateHistory(quint64 userId, quint64 score, QString startgame, QString endgame);

signals:

};

#endif // HISTORYAPI_H
