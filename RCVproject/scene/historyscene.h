#ifndef HISTORYSCENE_H
#define HISTORYSCENE_H

#include <QWidget>
#include <QStandardItemModel>
#include "homescene.h"
#include "noeditdelegate.h"
#include <QItemSelection>
#include <QScrollBar>
#include "homescene.h"
#include "core/clientcore.h"

namespace Ui {
class HistoryScene;
}

class HistoryScene : public QWidget
{
    Q_OBJECT

public:
    explicit HistoryScene(QWidget *parent = nullptr);
    ~HistoryScene();

    QList<quint64> getTops() const;
    void setTops(const QList<quint64> &newTops);

    QList<quint64> getScores() const;
    void setScores(const QList<quint64> &newScores);

    QList<QString> getStartgames() const;
    void setStartgames(const QList<QString> &newStartgames);

    QList<QString> getEndgames() const;
    void setEndgames(const QList<QString> &newEndgames);

    void setupList();

    ClientCore *getClientCore() const;
    void setClientCore(ClientCore *newClientCore);

private slots:
    void onSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected, QStandardItemModel *model);

    void on_back_clicked();

public slots:
    void on_name_linkActivated(const QString &link);

    void on_rank_linkActivated(const QString &link);


private:
    Ui::HistoryScene *ui;
    QStandardItemModel* model;
    QList<quint64> tops;
    QList<quint64> scores;
    QList<QString> startgames;
    QList<QString> endgames;
    ClientCore* clientCore;

};

#endif // HISTORYSCENE_H
