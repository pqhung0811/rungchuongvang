#ifndef HOMESCENE_H
#define HOMESCENE_H

#include <QWidget>
#include <QJsonArray>
#include <QPair>
#include "core/clientcore.h"
#include "createroomdialog.h"
#include "roomscene.h"
#include "listroomscene.h"
#include "rankscene.h"
#include "core/clientmanager.h"

namespace Ui {
class HomeScene;
}

class HomeScene : public QWidget
{
    Q_OBJECT

public:
    explicit HomeScene(QWidget *parent = nullptr);
    ~HomeScene();

    Ui::HomeScene *getUi() const;
    void setUi(Ui::HomeScene *newUi);

//    ClientManager *getClientManager() const;
//    void setClientManager(ClientManager *newClientManager);

private slots:
    void on_createRoomBtn_clicked();

    void on_findRoomBtn_clicked();
    void handleFindRoomResponse(const QJsonDocument &response);
    void handleViewRankResponse(const QJsonDocument &response);
    void on_rankBtn_clicked();
//    void onViewRankClicked();

public slots:
    void on_label_2_linkActivated(const QString &link);
    void on_label_3_linkActivated(const QString &link);

private:
    Ui::HomeScene *ui;
//    ClientManager* clientManager;
    ClientCore* clientCore;

signals:
};

#endif // HOMESCENE_H
