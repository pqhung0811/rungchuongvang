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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListRoomScene
{
public:
    QFrame *frame_5;
    QLabel *label_3;
    QFrame *frame_7;
    QFrame *frame_4;
    QLabel *label_2;
    QFrame *frame_2;
    QFrame *frame_3;
    QLabel *label_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableView *ListRoomView;

    void setupUi(QWidget *ListRoomScene)
    {
        if (ListRoomScene->objectName().isEmpty())
            ListRoomScene->setObjectName("ListRoomScene");
        ListRoomScene->resize(381, 511);
        ListRoomScene->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(187, 225, 96, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_5 = new QFrame(ListRoomScene);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(10, 60, 121, 21));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_5);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 121, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 Ex BT")});
        font.setBold(true);
        label_3->setFont(font);
        frame_7 = new QFrame(ListRoomScene);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(0, 50, 31, 31));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 15px; border: 1px solid gold;\n"
"background-image: url(:/images/icons8-gold-medal-30.png);\n"
""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(ListRoomScene);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(20, 10, 171, 31));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 15px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 171, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font1.setPointSize(18);
        label_2->setFont(font1);
        frame_2 = new QFrame(ListRoomScene);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 41, 41));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 20px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 0, 41, 41));
        frame_3->setStyleSheet(QString::fromUtf8("background-image: url(:/images/icons8-student-41.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"background-size: contain; \n"
"max-width: 200px;\n"
"max-height: 200px;\n"
"border-radius: 20px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(ListRoomScene);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 110, 191, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font2.setPointSize(24);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(161, 151, 57, 255), stop:1 rgba(255, 255, 255, 255));"));
        scrollArea = new QScrollArea(ListRoomScene);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(50, 170, 291, 331));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 289, 329));
        ListRoomView = new QTableView(scrollAreaWidgetContents);
        ListRoomView->setObjectName("ListRoomView");
        ListRoomView->setGeometry(QRect(0, 0, 291, 331));
        ListRoomView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(ListRoomScene);

        QMetaObject::connectSlotsByName(ListRoomScene);
    } // setupUi

    void retranslateUi(QWidget *ListRoomScene)
    {
        ListRoomScene->setWindowTitle(QCoreApplication::translate("ListRoomScene", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("ListRoomScene", "      gold: 2000", nullptr));
        label_2->setText(QCoreApplication::translate("ListRoomScene", "    Johnathan", nullptr));
        label_4->setText(QCoreApplication::translate("ListRoomScene", "List Room", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListRoomScene: public Ui_ListRoomScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTROOMSCENE_H
