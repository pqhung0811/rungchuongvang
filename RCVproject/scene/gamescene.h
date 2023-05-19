#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QWidget>
#include "user.h"

namespace Ui {
class GameScene;
}

class GameScene : public QWidget
{
    Q_OBJECT

public:
    explicit GameScene(QWidget *parent = nullptr);
    ~GameScene();

private:
    Ui::GameScene *ui;
};

#endif // GAMESCENE_H
