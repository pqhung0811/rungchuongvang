#ifndef ROOMSCENE_H
#define ROOMSCENE_H

#include <QWidget>

namespace Ui {
class RoomScene;
}

class RoomScene : public QWidget
{
    Q_OBJECT

public:
    explicit RoomScene(QWidget *parent = nullptr);
    ~RoomScene();

private:
    Ui::RoomScene *ui;
};

#endif // ROOMSCENE_H
