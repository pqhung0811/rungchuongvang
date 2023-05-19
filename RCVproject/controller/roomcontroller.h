
#ifndef ROOMCONTROLLER_H
#define ROOMCONTROLLER_H


#include <QObject>

class RoomController : public QObject
{
    Q_OBJECT
public:
    explicit RoomController(QObject *parent = nullptr);

signals:

};

#endif // ROOMCONTROLLER_H
