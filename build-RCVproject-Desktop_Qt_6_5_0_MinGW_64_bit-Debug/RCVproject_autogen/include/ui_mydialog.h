/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName("MyDialog");
        MyDialog->resize(272, 155);
        label = new QLabel(MyDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 211, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(MyDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 110, 80, 18));

        retranslateUi(MyDialog);

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QDialog *MyDialog)
    {
        MyDialog->setWindowTitle(QCoreApplication::translate("MyDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MyDialog", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MyDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
