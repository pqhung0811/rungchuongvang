/********************************************************************************
** Form generated from reading UI file 'listroomscene.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTROOMSCENE_H
#define UI_LISTROOMSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListRoomScene
{
public:
    QLabel *label;

    void setupUi(QWidget *ListRoomScene)
    {
        if (ListRoomScene->objectName().isEmpty())
            ListRoomScene->setObjectName("ListRoomScene");
        ListRoomScene->resize(387, 300);
        label = new QLabel(ListRoomScene);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 121, 16));

        retranslateUi(ListRoomScene);

        QMetaObject::connectSlotsByName(ListRoomScene);
    } // setupUi

    void retranslateUi(QWidget *ListRoomScene)
    {
        ListRoomScene->setWindowTitle(QCoreApplication::translate("ListRoomScene", "Form", nullptr));
        label->setText(QCoreApplication::translate("ListRoomScene", "List Room", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListRoomScene: public Ui_ListRoomScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTROOMSCENE_H
