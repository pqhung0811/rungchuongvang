/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_5;
    QPushButton *registerBtn;
    QPushButton *backBtn;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->setWindowModality(Qt::NonModal);
        Register->resize(400, 456);
        Register->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(Register);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(70, 130, 271, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 Hv BT")});
        font.setPointSize(14);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(Register);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 30, 181, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Script")});
        font1.setPointSize(24);
        font1.setBold(true);
        label_5->setFont(font1);
        registerBtn = new QPushButton(Register);
        registerBtn->setObjectName("registerBtn");
        registerBtn->setGeometry(QRect(150, 410, 91, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Swis721 Hv BT")});
        registerBtn->setFont(font2);
        registerBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(195, 149, 76, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/register.png"), QSize(), QIcon::Normal, QIcon::Off);
        registerBtn->setIcon(icon);
        backBtn = new QPushButton(Register);
        backBtn->setObjectName("backBtn");
        backBtn->setGeometry(QRect(0, 0, 61, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Verdana")});
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setKerning(false);
        backBtn->setFont(font3);
        backBtn->setCursor(QCursor(Qt::ArrowCursor));
        backBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(226, 121, 50, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backBtn->setIcon(icon1);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("Register", "Confirm New\n"
"Password:", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "New Password:", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        label->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        label_5->setText(QCoreApplication::translate("Register", "Register", nullptr));
        registerBtn->setText(QCoreApplication::translate("Register", "Register", nullptr));
        backBtn->setText(QCoreApplication::translate("Register", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
