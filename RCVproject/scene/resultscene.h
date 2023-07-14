#ifndef RESULTSCENE_H
#define RESULTSCENE_H

#include <QWidget>
#include <QStandardItemModel>
#include <noeditdelegate.h>
#include <QItemSelection>
#include <QScrollBar>

namespace Ui {
class ResultScene;
}

class ResultScene : public QWidget
{
    Q_OBJECT

public:
    explicit ResultScene(QWidget *parent = nullptr);
    ~ResultScene();

    QList<quint64> getScores() const;
    void setScores(const QList<quint64> &newScores);

    QList<QString> getUsernames() const;
    void setUsernames(const QList<QString> &newUsernames);

private slots:

public slots:
    void on_name_linkActivated(const QString &link);

    void on_rank_linkActivated(const QString &link);
    void setupList();

private:
    Ui::ResultScene *ui;
    QStandardItemModel* model;
    QList<QString> usernames;
    QList<quint64> scores;

};

#endif // RESULTSCENE_H
