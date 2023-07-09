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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankScene
{
public:
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableView *ListRankView;
    QLabel *label_4;
    QFrame *frame_4;
    QLabel *label_3;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_5;
    QLabel *label_5;
    QPushButton *pushButton;
    QFrame *frame_7;

    void setupUi(QWidget *RankScene)
    {
        if (RankScene->objectName().isEmpty())
            RankScene->setObjectName("RankScene");
        RankScene->resize(543, 543);
        RankScene->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(187, 225, 96, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_2 = new QLabel(RankScene);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 100, 37, 12));
        scrollArea = new QScrollArea(RankScene);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(50, 170, 461, 361));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical { background-color: #FF0000; }\n"
"QScrollBar:horizontal { background-color: #00FF00; }"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 459, 359));
        ListRankView = new QTableView(scrollAreaWidgetContents);
        ListRankView->setObjectName("ListRankView");
        ListRankView->setGeometry(QRect(0, 0, 461, 361));
        ListRankView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_4 = new QLabel(RankScene);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 110, 111, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font.setPointSize(24);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(161, 151, 57, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_4 = new QFrame(RankScene);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(20, 10, 171, 31));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 15px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 171, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font1.setPointSize(18);
        label_3->setFont(font1);
        frame_2 = new QFrame(RankScene);
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
        frame_5 = new QFrame(RankScene);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(20, 60, 121, 21));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 121, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Swis721 Ex BT")});
        font2.setBold(true);
        label_5->setFont(font2);
        pushButton = new QPushButton(RankScene);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 10, 61, 31));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/images/back+icon-1320196060092920381.png);\n"
"background-color: yellow;\n"
"border-radius: 8px; border: 2px solid green;"));
        frame_7 = new QFrame(RankScene);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(10, 50, 31, 31));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 15px; border: 1px solid gold;\n"
"background-image: url(:/images/icons8-gold-medal-30.png);\n"
""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        retranslateUi(RankScene);

        QMetaObject::connectSlotsByName(RankScene);
    } // setupUi

    void retranslateUi(QWidget *RankScene)
    {
        RankScene->setWindowTitle(QCoreApplication::translate("RankScene", "Form", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("RankScene", "Rank", nullptr));
        label_3->setText(QCoreApplication::translate("RankScene", "    Johnathan", nullptr));
        label_5->setText(QCoreApplication::translate("RankScene", "      gold: 2000", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RankScene: public Ui_RankScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKSCENE_H
