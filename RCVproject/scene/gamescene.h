#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QWidget>
#include "user.h"
#include <QPushButton>
#include <QMessageBox>
#include "core/clientcore.h"

namespace Ui {
class GameScene;
}

class GameScene : public QWidget
{
    Q_OBJECT

public:
    explicit GameScene(QWidget *parent = nullptr);
    ~GameScene();

    QList<QPair<QString, QList<QPair<QString, quint64> > > > getQuestions() const;
    void setQuestions(const QList<QPair<QString, QList<QPair<QString, quint64> > > > &newQuestions);

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_remainQuestion_linkActivated(const QString &link);

public slots:
    void on_name_linkActivated(const QString &link);
    void on_rank_linkActivated(const QString &link);
    void on_level_linkActivated(const QString &link);
    void on_roomname_linkActivated(const QString &link);
    void setupList();

private:
    Ui::GameScene *ui;
    ClientCore* clientcore;
    QList<QPair<QString, QList<QPair<QString, quint64>>>> questions;
    quint64 score;
    quint64 remainQues;
    QList<QPushButton*> listButton;
    QList<quint64> resultButton;



};

#endif // GAMESCENE_H
