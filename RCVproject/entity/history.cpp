
#include "history.h"

History::History(QObject *parent)
    : QObject{parent}
{

}

quint64 History::getTop() const
{
    return top;
}

void History::setTop(quint64 newTop)
{
    top = newTop;
}

quint64 History::getScore() const
{
    return score;
}

void History::setScore(quint64 newScore)
{
    score = newScore;
}

QString History::getStartgame() const
{
    return startgame;
}

void History::setStartgame(const QString &newStartgame)
{
    startgame = newStartgame;
}

QString History::getEndgame() const
{
    return endgame;
}

void History::setEndgame(const QString &newEndgame)
{
    endgame = newEndgame;
}

