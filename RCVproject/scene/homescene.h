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

    Ui::HomeScene *getUi() const;
    void setUi(Ui::HomeScene *newUi);

private slots:
    void on_playNowBtn_clicked();

    void on_createRoomBtn_clicked();

public slots:
    void on_label_2_linkActivated(const QString &link);

private:
    Ui::HomeScene *ui;

signals:
};

#endif // HOMESCENE_H
