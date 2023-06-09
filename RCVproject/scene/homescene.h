#ifndef HOMESCENE_H
#define HOMESCENE_H

#include <QWidget>
#include "core/clientcore.h"
#include "createroomdialog.h"
#include "roomscene.h"

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

private slots:
    void on_createRoomBtn_clicked();

    void on_findRoomBtn_clicked();
    void handleFindRoomResponse(const QJsonDocument &response);

public slots:
    void on_label_2_linkActivated(const QString &link);
    void on_label_3_linkActivated(const QString &link);

private:
    Ui::HomeScene *ui;
    ClientCore* clientCore;

signals:
};

#endif // HOMESCENE_H
