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

namespace Ui {
class ListRoomScene;
}

class ListRoomScene : public QWidget
{
    Q_OBJECT

public:
    explicit ListRoomScene(QWidget *parent = nullptr);
    ~ListRoomScene();

private slots:
    void onSelectionChanged(const QItemSelection& selected, const QItemSelection& deselected, QStandardItemModel* model);

private:
    Ui::ListRoomScene *ui;
    QStandardItemModel* model;

};

#endif // LISTROOMSCENE_H
