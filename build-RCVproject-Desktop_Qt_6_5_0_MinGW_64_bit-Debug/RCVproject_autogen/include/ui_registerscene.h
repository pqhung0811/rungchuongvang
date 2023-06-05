/********************************************************************************
** Form generated from reading UI file 'registerscene.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERSCENE_H
#define UI_REGISTERSCENE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterScene
{
public:
    QPushButton *registerBtn;
    QPushButton *backBtn;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *confirmPassEdit;
    QLabel *label_4;
    QLineEdit *userEdit;
    QLineEdit *passEdit;
    QLabel *label_2;
    QLabel *label_5;

    void setupUi(QWidget *RegisterScene)
    {
        if (RegisterScene->objectName().isEmpty())
            RegisterScene->setObjectName("RegisterScene");
        RegisterScene->resize(400, 415);
        registerBtn = new QPushButton(RegisterScene);
        registerBtn->setObjectName("registerBtn");
        registerBtn->setGeometry(QRect(160, 370, 91, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 Hv BT")});
        registerBtn->setFont(font);
        registerBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(195, 149, 76, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/register.png"), QSize(), QIcon::Normal, QIcon::Off);
        registerBtn->setIcon(icon);
        backBtn = new QPushButton(RegisterScene);
        backBtn->setObjectName("backBtn");
        backBtn->setGeometry(QRect(0, 0, 61, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setKerning(false);
        backBtn->setFont(font1);
        backBtn->setCursor(QCursor(Qt::ArrowCursor));
        backBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(226, 121, 50, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backBtn->setIcon(icon1);
        gridLayoutWidget = new QWidget(RegisterScene);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(70, 130, 271, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Swis721 Hv BT")});
        font2.setPointSize(14);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        confirmPassEdit = new QLineEdit(gridLayoutWidget);
        confirmPassEdit->setObjectName("confirmPassEdit");

        gridLayout->addWidget(confirmPassEdit, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        userEdit = new QLineEdit(gridLayoutWidget);
        userEdit->setObjectName("userEdit");

        gridLayout->addWidget(userEdit, 0, 1, 1, 1);

        passEdit = new QLineEdit(gridLayoutWidget);
        passEdit->setObjectName("passEdit");

        gridLayout->addWidget(passEdit, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(RegisterScene);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 30, 181, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe Script")});
        font3.setPointSize(24);
        font3.setBold(true);
        label_5->setFont(font3);

        retranslateUi(RegisterScene);

        QMetaObject::connectSlotsByName(RegisterScene);
    } // setupUi

    void retranslateUi(QWidget *RegisterScene)
    {
        RegisterScene->setWindowTitle(QCoreApplication::translate("RegisterScene", "Form", nullptr));
        registerBtn->setText(QCoreApplication::translate("RegisterScene", "Register", nullptr));
        backBtn->setText(QCoreApplication::translate("RegisterScene", "Back", nullptr));
        label->setText(QCoreApplication::translate("RegisterScene", "Username:", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterScene", "Confirm Password:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterScene", "Password:", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterScene", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterScene: public Ui_RegisterScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERSCENE_H
