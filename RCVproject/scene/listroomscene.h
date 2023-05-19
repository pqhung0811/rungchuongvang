#ifndef LISTROOMSCENE_H
#define LISTROOMSCENE_H

#include <QWidget>

namespace Ui {
class ListRoomScene;
}

class ListRoomScene : public QWidget
{
    Q_OBJECT

public:
    explicit ListRoomScene(QWidget *parent = nullptr);
    ~ListRoomScene();

private:
    Ui::ListRoomScene *ui;
};

#endif // LISTROOMSCENE_H
