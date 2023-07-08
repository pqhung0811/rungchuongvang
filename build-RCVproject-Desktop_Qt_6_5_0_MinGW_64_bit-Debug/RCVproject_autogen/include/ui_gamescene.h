/********************************************************************************
** Form generated from reading UI file 'gamescene.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESCENE_H
#define UI_GAMESCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameScene
{
public:
    QFrame *frame_4;
    QLabel *name;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_5;
    QLabel *rank;
    QFrame *frame_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QLabel *roomname;
    QLabel *level;
    QFrame *frame;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *clock;

    void setupUi(QWidget *GameScene)
    {
        if (GameScene->objectName().isEmpty())
            GameScene->setObjectName("GameScene");
        GameScene->resize(805, 456);
        frame_4 = new QFrame(GameScene);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(20, 10, 171, 31));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 15px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        name = new QLabel(frame_4);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 0, 171, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font.setPointSize(18);
        name->setFont(font);
        frame_2 = new QFrame(GameScene);
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
        frame_5 = new QFrame(GameScene);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(10, 60, 121, 21));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        rank = new QLabel(frame_5);
        rank->setObjectName("rank");
        rank->setGeometry(QRect(0, 0, 121, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 Ex BT")});
        font1.setBold(true);
        rank->setFont(font1);
        frame_7 = new QFrame(GameScene);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(0, 50, 31, 31));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 15px; border: 1px solid gold;\n"
"background-image: url(:/images/icons8-gold-medal-30.png);\n"
""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        scrollArea = new QScrollArea(GameScene);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 90, 121, 361));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 119, 359));
        verticalWidget = new QWidget(scrollAreaWidgetContents);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setGeometry(QRect(0, 0, 121, 361));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea->setWidget(scrollAreaWidgetContents);
        roomname = new QLabel(GameScene);
        roomname->setObjectName("roomname");
        roomname->setGeometry(QRect(330, 10, 251, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font2.setPointSize(30);
        roomname->setFont(font2);
        level = new QLabel(GameScene);
        level->setObjectName("level");
        level->setGeometry(QRect(630, 20, 161, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Lucida Handwriting")});
        font3.setPointSize(14);
        level->setFont(font3);
        level->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid color ; border-radius: 10px;\n"
"color: rgb(255, 0, 0);"));
        frame = new QFrame(GameScene);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(160, 90, 621, 351));
        frame->setStyleSheet(QString::fromUtf8("image: url(:/images/backgameplay1.jpg);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 170, 91, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sitka Text")});
        font4.setPointSize(18);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/images/free-vector-gold-button-010_101796_Gold_Button_010.png);"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(76, 91, 391, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Modern No. 20")});
        font5.setPointSize(15);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("image: url(:/images/b8b8b8.png);\n"
"background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 170, 91, 31));
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/images/free-vector-gold-button-010_101796_Gold_Button_010.png);"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(130, 260, 91, 31));
        pushButton_3->setFont(font4);
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/images/free-vector-gold-button-010_101796_Gold_Button_010.png);"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(310, 260, 91, 31));
        pushButton_4->setFont(font4);
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/images/free-vector-gold-button-010_101796_Gold_Button_010.png);"));
        clock = new QLabel(frame);
        clock->setObjectName("clock");
        clock->setGeometry(QRect(240, 210, 51, 51));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI Variable Text Semibold")});
        font6.setPointSize(20);
        clock->setFont(font6);
        clock->setStyleSheet(QString::fromUtf8("image: url(:/images/circle-icon-png-favpng.jpg);"));
        clock->setMidLineWidth(1);

        retranslateUi(GameScene);

        QMetaObject::connectSlotsByName(GameScene);
    } // setupUi

    void retranslateUi(QWidget *GameScene)
    {
        GameScene->setWindowTitle(QCoreApplication::translate("GameScene", "Form", nullptr));
        name->setText(QCoreApplication::translate("GameScene", "    Johnathan", nullptr));
        rank->setText(QCoreApplication::translate("GameScene", "      gold: 2000", nullptr));
        roomname->setText(QCoreApplication::translate("GameScene", "Roomname", nullptr));
        level->setText(QCoreApplication::translate("GameScene", "Level:", nullptr));
        pushButton->setText(QCoreApplication::translate("GameScene", "A", nullptr));
        label->setText(QCoreApplication::translate("GameScene", "Question", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GameScene", "B", nullptr));
        pushButton_3->setText(QCoreApplication::translate("GameScene", "C", nullptr));
        pushButton_4->setText(QCoreApplication::translate("GameScene", "D", nullptr));
        clock->setText(QCoreApplication::translate("GameScene", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameScene: public Ui_GameScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESCENE_H
