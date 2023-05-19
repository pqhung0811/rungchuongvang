/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *signInBtn;
    QLabel *label_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QLabel *label;
    QLineEdit *usernameEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *registerBtn;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(375, 404);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        signInBtn = new QPushButton(centralwidget);
        signInBtn->setObjectName("signInBtn");
        signInBtn->setGeometry(QRect(160, 240, 71, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 Hv BT")});
        font.setPointSize(11);
        signInBtn->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        signInBtn->setIcon(icon);
        signInBtn->setIconSize(QSize(15, 15));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 40, 221, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Script")});
        font1.setPointSize(24);
        font1.setBold(true);
        label_4->setFont(font1);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(60, 120, 261, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Swis721 Hv BT")});
        font2.setPointSize(18);
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        passwordEdit = new QLineEdit(gridLayoutWidget);
        passwordEdit->setObjectName("passwordEdit");

        gridLayout->addWidget(passwordEdit, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setFont(font2);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        usernameEdit = new QLineEdit(gridLayoutWidget);
        usernameEdit->setObjectName("usernameEdit");

        gridLayout->addWidget(usernameEdit, 0, 1, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(90, 270, 221, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName("label_3");
        QFont font3;
        font3.setPointSize(10);
        label_3->setFont(font3);

        horizontalLayout->addWidget(label_3);

        registerBtn = new QPushButton(horizontalLayoutWidget);
        registerBtn->setObjectName("registerBtn");
        QFont font4;
        font4.setBold(true);
        registerBtn->setFont(font4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/register.png"), QSize(), QIcon::Normal, QIcon::Off);
        registerBtn->setIcon(icon1);
        registerBtn->setIconSize(QSize(15, 15));

        horizontalLayout->addWidget(registerBtn);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        signInBtn->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "SIGN IN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password: ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Click here to sign up:", nullptr));
        registerBtn->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
