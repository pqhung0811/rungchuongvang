#ifndef RANKSCENE_H
#define RANKSCENE_H

#include <QWidget>
#include <QStandardItemModel>
#include <noeditdelegate.h>
#include <QItemSelection>
#include <QScrollBar>
#include "homescene.h"
#include "core/clientmanager.h"

namespace Ui {
class RankScene;
}

class RankScene : public QWidget
{
    Q_OBJECT

public:
    explicit RankScene(QWidget *parent = nullptr);
    ~RankScene();

    void setupList();

    QList<QString> getUsernames() const;
    void setUsernames(const QList<QString> &newUsernames);

    QList<quint64> getUserIds() const;
    void setUserIds(const QList<quint64> &newUserIds);

    QList<quint64> getRanked() const;
    void setRanked(const QList<quint64> &newRanked);

    QList<quint64> getRankScore() const;
    void setRankScore(const QList<quint64> &newRankScore);

//    ClientManager *getClientManager() const;
//    void setClientManager(ClientManager *newClientManager);

private slots:
    void onSelectionChanged(const QItemSelection& selected, const QItemSelection& deselected, QStandardItemModel* model);

    void on_pushButton_clicked();

public slots:
    void on_label_3_linkActivated(const QString &link);

    void on_label_5_linkActivated(const QString &link);

private:
    Ui::RankScene *ui;
//    ClientManager* clientManager;
    QStandardItemModel* model;
    QList<quint64> userIds;
    QList<QString> usernames;
    QList<quint64> ranked;
    QList<quint64> rankScore;
};

#endif // RANKSCENE_H
