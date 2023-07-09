
#ifndef STARTGAMECONTROLLER_H
#define STARTGAMECONTROLLER_H


#include <QObject>


class StartGameController : public QObject
{
    Q_OBJECT
public:
    explicit StartGameController(QObject *parent = nullptr);

signals:

};

#endif // STARTGAMECONTROLLER_H
