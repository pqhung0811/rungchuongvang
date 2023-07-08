#ifndef ROOMSCENE_H
#define ROOMSCENE_H

#include <QWidget>
#include "gamescene.h"
#include <QLabel>
#include <QLayout>

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

    QList<QPair<QString, QString> > getListUser() const;
    void setListUser(const QList<QPair<QString, QString> > &newListUser);

private slots:

    void on_playBtn_clicked();

public slots:
    void on_label_linkActivated(const QString &link);
    void on_level_linkActivated(const QString &link);
    void on_label_2_linkActivated(const QString &link);
    void on_roomname_linkActivated(const QString &link);
    QWidget* createVerticalUser(QString username, QString rank);
    void addPlayer(QWidget* verticalUser, quint64 row, quint64 column);

private:
    Ui::RoomScene *ui;
    QList<QPair<QString, QString>> listUser;

};

#endif // ROOMSCENE_H
