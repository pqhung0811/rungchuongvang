#ifndef ROOMSCENE_H
#define ROOMSCENE_H

#include <QWidget>
#include "gamescene.h"
#include <QLabel>
#include <QLayout>
#include <QSpinBox>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include "core/clientcore.h"
#include "homescene.h"
#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>



namespace Ui {
class RoomScene;
}

class RoomScene : public QWidget
{
    Q_OBJECT

// Khai báo cấu trúc cho câu hỏi và đáp án
//typedef QPair<QString, bool> Answerr;
//typedef QPair<QString, QList<Answerr>> Questionn;

public:
    explicit RoomScene(QWidget *parent = nullptr);
    ~RoomScene();

    Ui::RoomScene *getUi() const;
    void setUi(Ui::RoomScene *newUi);

    QList<QPair<QString, QString> > getListUser() const;
    void setListUser(const QList<QPair<QString, QString> > &newListUser);

    ClientCore *getClientCore() const;
    void setClientCore(ClientCore *newClientCore);

    int getRow() const;

    int getCollumn() const;

    void setRow(int newRow);

    void setCollumn(int newCollumn);

    QList<QString> getUsernames() const;
    void setUsernames(const QList<QString> &newUsernames);

    QList<QString> getRankscore() const;
    void setRankscore(const QList<QString> &newRankscore);

private slots:

    void on_playBtn_clicked();

    void on_spinBoxNo_valueChanged(int arg1);

    void on_back_clicked();

public slots:
    void on_label_linkActivated(const QString &link);
    void on_level_linkActivated(const QString &link);
    void on_label_2_linkActivated(const QString &link);
    void on_roomname_linkActivated(const QString &link);
    QWidget* createVerticalUser(QString username, QString rank);
    void addPlayer(QWidget* verticalUser, quint64 row, quint64 column);
    void handlePlayResponse(const QJsonDocument &response);
    void handleJoinRoomResponse(const QJsonDocument &response);
    void handelAcceptJoinRoomResponse(const QJsonDocument &response);
    void createDialog(QString content, QString username, QString rankStr, quint64 userId);
    void setupLayout();
    void accept(QString username, QString rankStr, quint64 userId);
    void deny(quint64 userId);
    void disablePlayButton();
    void connectSignal();

private:
    Ui::RoomScene *ui;
    QList<QPair<QString, QString>> listUser;
    ClientCore* clientCore;
    QList<QString> usernames;
    QList<QString> rankscore;
    int noQuestion;
    int row;
    int collumn;

};

#endif // ROOMSCENE_H
