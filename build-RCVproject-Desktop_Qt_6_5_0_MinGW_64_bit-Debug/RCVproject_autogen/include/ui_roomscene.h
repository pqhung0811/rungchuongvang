/********************************************************************************
** Form generated from reading UI file 'roomscene.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMSCENE_H
#define UI_ROOMSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomScene
{
public:
    QFrame *frame;
    QWidget *gridWidget_2;
    QGridLayout *gridLayout_2;
    QWidget *myVerticalWidget_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *myVerticalWidget_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *myVerticalWidget_5;
    QVBoxLayout *verticalLayout_7;
    QWidget *myVerticalWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_10;
    QWidget *myVerticalWidget_4;
    QVBoxLayout *verticalLayout_6;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QWidget *myVerticalWidget_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QFrame *frame_4;
    QLabel *label;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_5;
    QLabel *label_2;
    QFrame *frame_7;
    QPushButton *playBtn;
    QLabel *roomname;
    QLabel *level;
    QLabel *roomname_2;

    void setupUi(QWidget *RoomScene)
    {
        if (RoomScene->objectName().isEmpty())
            RoomScene->setObjectName("RoomScene");
        RoomScene->resize(834, 539);
        QFont font;
        font.setPointSize(14);
        RoomScene->setFont(font);
        RoomScene->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(RoomScene);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 90, 791, 391));
        frame->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridWidget_2 = new QWidget(frame);
        gridWidget_2->setObjectName("gridWidget_2");
        gridWidget_2->setGeometry(QRect(20, 20, 741, 351));
        gridWidget_2->setStyleSheet(QString::fromUtf8("border: none"));
        gridLayout_2 = new QGridLayout(gridWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        myVerticalWidget_2 = new QWidget(gridWidget_2);
        myVerticalWidget_2->setObjectName("myVerticalWidget_2");
        myVerticalWidget_2->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(myVerticalWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");

        gridLayout_2->addWidget(myVerticalWidget_2, 0, 1, 1, 1);

        myVerticalWidget_3 = new QWidget(gridWidget_2);
        myVerticalWidget_3->setObjectName("myVerticalWidget_3");
        myVerticalWidget_3->setCursor(QCursor(Qt::SizeAllCursor));
        myVerticalWidget_3->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(myVerticalWidget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");

        gridLayout_2->addWidget(myVerticalWidget_3, 0, 2, 1, 1);

        myVerticalWidget_5 = new QWidget(gridWidget_2);
        myVerticalWidget_5->setObjectName("myVerticalWidget_5");
        myVerticalWidget_5->setCursor(QCursor(Qt::SizeAllCursor));
        myVerticalWidget_5->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_7 = new QVBoxLayout(myVerticalWidget_5);
        verticalLayout_7->setObjectName("verticalLayout_7");

        gridLayout_2->addWidget(myVerticalWidget_5, 0, 4, 1, 1);

        myVerticalWidget = new QWidget(gridWidget_2);
        myVerticalWidget->setObjectName("myVerticalWidget");
        myVerticalWidget->setCursor(QCursor(Qt::SizeAllCursor));
        myVerticalWidget->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        verticalLayout_4 = new QVBoxLayout(myVerticalWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_12 = new QLabel(myVerticalWidget);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/icons8-student-64.png")));

        verticalLayout_4->addWidget(label_12);

        label_11 = new QLabel(myVerticalWidget);
        label_11->setObjectName("label_11");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("VNI-Duff")});
        font1.setPointSize(12);
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_4->addWidget(label_11);

        label_10 = new QLabel(myVerticalWidget);
        label_10->setObjectName("label_10");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("VNI-Chancery")});
        font2.setPointSize(12);
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_4->addWidget(label_10);


        gridLayout_2->addWidget(myVerticalWidget, 0, 0, 1, 1);

        myVerticalWidget_4 = new QWidget(gridWidget_2);
        myVerticalWidget_4->setObjectName("myVerticalWidget_4");
        myVerticalWidget_4->setCursor(QCursor(Qt::SizeAllCursor));
        myVerticalWidget_4->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_6 = new QVBoxLayout(myVerticalWidget_4);
        verticalLayout_6->setObjectName("verticalLayout_6");

        gridLayout_2->addWidget(myVerticalWidget_4, 0, 3, 1, 1);

        verticalWidget = new QWidget(gridWidget_2);
        verticalWidget->setObjectName("verticalWidget");
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName("verticalLayout");

        gridLayout_2->addWidget(verticalWidget, 1, 0, 1, 1);

        myVerticalWidget_6 = new QWidget(gridWidget_2);
        myVerticalWidget_6->setObjectName("myVerticalWidget_6");
        myVerticalWidget_6->setCursor(QCursor(Qt::SizeAllCursor));
        myVerticalWidget_6->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        verticalLayout_8 = new QVBoxLayout(myVerticalWidget_6);
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_22 = new QLabel(myVerticalWidget_6);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/images/icons8-student-64.png")));

        verticalLayout_8->addWidget(label_22);

        label_23 = new QLabel(myVerticalWidget_6);
        label_23->setObjectName("label_23");
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_8->addWidget(label_23);

        label_24 = new QLabel(myVerticalWidget_6);
        label_24->setObjectName("label_24");
        label_24->setFont(font2);
        label_24->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_8->addWidget(label_24);


        gridLayout_2->addWidget(myVerticalWidget_6, 1, 4, 1, 1);

        frame_4 = new QFrame(RoomScene);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(20, 10, 171, 31));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 15px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_4);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 171, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font3.setPointSize(18);
        label->setFont(font3);
        frame_2 = new QFrame(RoomScene);
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
        frame_5 = new QFrame(RoomScene);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(10, 60, 121, 21));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 121, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Swis721 Ex BT")});
        font4.setBold(true);
        label_2->setFont(font4);
        frame_7 = new QFrame(RoomScene);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(0, 50, 31, 31));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 15px; border: 1px solid gold;\n"
"background-image: url(:/images/icons8-gold-medal-30.png);\n"
""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        playBtn = new QPushButton(RoomScene);
        playBtn->setObjectName("playBtn");
        playBtn->setGeometry(QRect(350, 490, 111, 41));
        playBtn->setStyleSheet(QString::fromUtf8("image: url(:/images/Play-Now-Button.png);"));
        roomname = new QLabel(RoomScene);
        roomname->setObjectName("roomname");
        roomname->setGeometry(QRect(310, 30, 251, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font5.setPointSize(30);
        roomname->setFont(font5);
        level = new QLabel(RoomScene);
        level->setObjectName("level");
        level->setGeometry(QRect(650, 40, 161, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Lucida Handwriting")});
        font6.setPointSize(14);
        level->setFont(font6);
        level->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid color ; border-radius: 10px;\n"
"color: rgb(255, 0, 0);"));
        roomname_2 = new QLabel(RoomScene);
        roomname_2->setObjectName("roomname_2");
        roomname_2->setGeometry(QRect(570, 360, 251, 41));
        roomname_2->setFont(font5);

        retranslateUi(RoomScene);

        QMetaObject::connectSlotsByName(RoomScene);
    } // setupUi

    void retranslateUi(QWidget *RoomScene)
    {
        RoomScene->setWindowTitle(QCoreApplication::translate("RoomScene", "Form", nullptr));
        label_12->setText(QString());
        label_11->setText(QCoreApplication::translate("RoomScene", "Johnathan", nullptr));
        label_10->setText(QCoreApplication::translate("RoomScene", "Dimond 500", nullptr));
        label_22->setText(QString());
        label_23->setText(QCoreApplication::translate("RoomScene", "Johnathan", nullptr));
        label_24->setText(QCoreApplication::translate("RoomScene", "Dimond 500", nullptr));
        label->setText(QCoreApplication::translate("RoomScene", "    Johnathan", nullptr));
        label_2->setText(QCoreApplication::translate("RoomScene", "      gold: 2000", nullptr));
        playBtn->setText(QString());
        roomname->setText(QCoreApplication::translate("RoomScene", "Roomname", nullptr));
        level->setText(QCoreApplication::translate("RoomScene", "Level:", nullptr));
        roomname_2->setText(QCoreApplication::translate("RoomScene", "Roomname", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomScene: public Ui_RoomScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMSCENE_H
