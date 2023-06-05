#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include "core/clientcore.h"
#include "mainwindow.h"

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

    ClientCore *getClientCore() const;
    void setClientCore(ClientCore *newClientCore);

private slots:
    void on_registerBtn_clicked();

private:
    Ui::Register *ui;
    ClientCore* clientCore;
};

#endif // REGISTER_H
