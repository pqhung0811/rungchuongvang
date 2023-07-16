#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QWidget>
#include "user.h"
#include <QPushButton>
#include <QMessageBox>
#include "core/clientcore.h"
#include <QTimer>
#include <QTime>
#include <QThread>
#include "resultscene.h"
#include "roomscene.h"
#include "homescene.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

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

    quint64 getRemainQuestion() const;
    void setRemainQuestion(quint64 newRemainQuestion);

    ClientCore *getClientcore() const;
    void setClientcore(ClientCore *newClientcore);

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void disableButton();

    void on_score_linkActivated(const QString &link);

    void on_back_clicked();

public slots:
    void on_name_linkActivated(const QString &link);
    void on_rank_linkActivated(const QString &link);
    void on_level_linkActivated(const QString &link);
    void on_roomname_linkActivated(const QString &link);
    void on_remainQuestion_linkActivated(const QString &link);
    void setupList();
    void setupClock();
    void finishGame();
    void handleFinishResponse(const QJsonDocument &response);

private:
    Ui::GameScene *ui;
    ClientCore* clientcore;
    QList<QPair<QString, QList<QPair<QString, quint64>>>> questions;
    quint64 score;
    QList<QPushButton*> listButton;
    QList<quint64> resultButton;
    quint64 callCount;
    quint64 remainQuestion;
    QTime time;

signals:
    void checkFinish();

};

#endif // GAMESCENE_H
