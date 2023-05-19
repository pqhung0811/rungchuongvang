#ifndef HOMESCENE_H
#define HOMESCENE_H

#include <QWidget>

namespace Ui {
class HomeScene;
}

class HomeScene : public QWidget
{
    Q_OBJECT

public:
    explicit HomeScene(QWidget *parent = nullptr);
    ~HomeScene();

private slots:
    void on_playNowBtn_clicked();

    void on_createRoomBtn_clicked();

private:
    Ui::HomeScene *ui;
};

#endif // HOMESCENE_H
