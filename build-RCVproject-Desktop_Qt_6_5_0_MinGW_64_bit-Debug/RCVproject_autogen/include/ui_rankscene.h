/********************************************************************************
** Form generated from reading UI file 'rankscene.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKSCENE_H
#define UI_RANKSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankScene
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *RankScene)
    {
        if (RankScene->objectName().isEmpty())
            RankScene->setObjectName("RankScene");
        RankScene->resize(400, 300);
        label = new QLabel(RankScene);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 10, 101, 31));
        label_2 = new QLabel(RankScene);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 100, 37, 12));

        retranslateUi(RankScene);

        QMetaObject::connectSlotsByName(RankScene);
    } // setupUi

    void retranslateUi(QWidget *RankScene)
    {
        RankScene->setWindowTitle(QCoreApplication::translate("RankScene", "Form", nullptr));
        label->setText(QCoreApplication::translate("RankScene", "Rank", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RankScene: public Ui_RankScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKSCENE_H
