#ifndef LISTROOMSCENE_H
#define LISTROOMSCENE_H

#include <QWidget>
#include <QStandardItemModel>
#include <QListWidgetItem>
#include <QListWidget>
#include <QTableWidgetItem>
#include <QItemSelection>
#include <QModelIndexList>
#include <QVariant>
#include "noeditdelegate.h"
#include <QList>
#include "core/clientcore.h"
#include "homescene.h"

namespace Ui {
class ListRoomScene;
}

class ListRoomScene : public QWidget
{
    Q_OBJECT

public:
    explicit ListRoomScene(QWidget *parent = nullptr);
    ~ListRoomScene();

    QList<QString> getRoomnames() const;
    void setRoomnames(const QList<QString> &newRoomnames);

//    void setupList();

    QList<quint64> getRoomIds() const;
    void setRoomIds(const QList<quint64> &newRoomIds);
    void setupLayout();

    void setUsername(const QString &newUsername);

    ClientCore *getClientCore() const;
    void setClientCore(ClientCore *newClientCore);

private slots:

    void on_pushButton_clicked();
    void addRoom(QWidget *verticalRoom, quint64 row, quint64 column);


public slots:
    void on_label_2_linkActivated(const QString &link);

    void on_label_3_linkActivated(const QString &link);
    QWidget* createVerticalRoom(quint64 id, QString roomname);
    void handleButtonClick(quint64 id);
    void handleJoinRoomResponse(const QJsonDocument &response);
    void disconnectSignal();

private:
    Ui::ListRoomScene *ui;
    QStandardItemModel* model;
    QString username;
    quint64 level;
    QList<quint64> roomIds;
    QList<QString> roomnames;
    ClientCore* clientCore;
    int row;
    int column;
    int button;

};

#endif // LISTROOMSCENE_H
