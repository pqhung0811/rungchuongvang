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

    Ui::RoomScene *getUi() const;
    void setUi(Ui::RoomScene *newUi);

private slots:

public slots:
    void on_label_linkActivated(const QString &link);

    void on_label_2_linkActivated(const QString &link);

private:
    Ui::RoomScene *ui;
};

#endif // ROOMSCENE_H
