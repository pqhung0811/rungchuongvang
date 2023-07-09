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

    void setupList();

    QList<quint64> getRoomIds() const;
    void setRoomIds(const QList<quint64> &newRoomIds);

private slots:
    void onSelectionChanged(const QItemSelection& selected, const QItemSelection& deselected, QStandardItemModel* model);

    void on_pushButton_clicked();

public slots:
    void on_label_2_linkActivated(const QString &link);

    void on_label_3_linkActivated(const QString &link);

private:
    Ui::ListRoomScene *ui;
    QStandardItemModel* model;
    quint64 level;
    QList<quint64> roomIds;
    QList<QString> roomnames;

};

#endif // LISTROOMSCENE_H
