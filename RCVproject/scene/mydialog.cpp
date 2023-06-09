#include "mydialog.h"
#include "ui_mydialog.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    connect(ui->label, &QLabel::objectNameChanged, this, &MyDialog::changLabel);
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::changLabel(const QString &objectName)
{
    this->ui->label->setText(objectName);
}


void MyDialog::on_pushButton_clicked()
{
    close();
}

