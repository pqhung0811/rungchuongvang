
#ifndef HISTORY_H
#define HISTORY_H


#include <QObject>


class History : public QObject
{
    Q_OBJECT
public:
    explicit History(QObject *parent = nullptr);

    quint64 getTop() const;
    void setTop(quint64 newTop);

    quint64 getScore() const;
    void setScore(quint64 newScore);

    QString getStartgame() const;
    void setStartgame(const QString &newStartgame);

    QString getEndgame() const;
    void setEndgame(const QString &newEndgame);

private:
    quint64 top;
    quint64 score;
    QString startgame;
    QString endgame;

signals:

};

#endif // HISTORY_H
