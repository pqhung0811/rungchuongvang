#ifndef RANKSCENE_H
#define RANKSCENE_H

#include <QWidget>

namespace Ui {
class RankScene;
}

class RankScene : public QWidget
{
    Q_OBJECT

public:
    explicit RankScene(QWidget *parent = nullptr);
    ~RankScene();

private:
    Ui::RankScene *ui;
};

#endif // RANKSCENE_H
