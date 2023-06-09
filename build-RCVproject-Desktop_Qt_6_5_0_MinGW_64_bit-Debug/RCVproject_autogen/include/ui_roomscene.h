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
    QWidget *myVerticalWidget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *myVerticalWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *myVerticalWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_10;
    QWidget *myVerticalWidget_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QFrame *frame_4;
    QLabel *label;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_5;
    QLabel *label_2;
    QFrame *frame_7;
    QLabel *label_3;
    QPushButton *playBtn;

    void setupUi(QWidget *RoomScene)
    {
        if (RoomScene->objectName().isEmpty())
            RoomScene->setObjectName("RoomScene");
        RoomScene->resize(834, 534);
        QFont font;
        font.setPointSize(14);
        RoomScene->setFont(font);
        RoomScene->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(RoomScene);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 100, 801, 471));
        frame->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridWidget_2 = new QWidget(frame);
        gridWidget_2->setObjectName("gridWidget_2");
        gridWidget_2->setGeometry(QRect(20, 20, 491, 171));
        gridWidget_2->setStyleSheet(QString::fromUtf8("border: none"));
        gridLayout_2 = new QGridLayout(gridWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        myVerticalWidget_3 = new QWidget(gridWidget_2);
        myVerticalWidget_3->setObjectName("myVerticalWidget_3");
        myVerticalWidget_3->setCursor(QCursor(Qt::SizeAllCursor));
        myVerticalWidget_3->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        verticalLayout_5 = new QVBoxLayout(myVerticalWidget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_13 = new QLabel(myVerticalWidget_3);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/images/icons8-student-64.png")));

        verticalLayout_5->addWidget(label_13);

        label_14 = new QLabel(myVerticalWidget_3);
        label_14->setObjectName("label_14");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("VNI-Duff")});
        font1.setPointSize(12);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_5->addWidget(label_14);

        label_15 = new QLabel(myVerticalWidget_3);
        label_15->setObjectName("label_15");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("VNI-Chancery")});
        font2.setPointSize(12);
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_5->addWidget(label_15);


        gridLayout_2->addWidget(myVerticalWidget_3, 0, 2, 1, 1);

        myVerticalWidget_2 = new QWidget(gridWidget_2);
        myVerticalWidget_2->setObjectName("myVerticalWidget_2");
        myVerticalWidget_2->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        verticalLayout_3 = new QVBoxLayout(myVerticalWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_9 = new QLabel(myVerticalWidget_2);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/images/icons8-student-64.png")));

        verticalLayout_3->addWidget(label_9);

        label_7 = new QLabel(myVerticalWidget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(myVerticalWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_3->addWidget(label_8);


        gridLayout_2->addWidget(myVerticalWidget_2, 0, 1, 1, 1);

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
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_4->addWidget(label_11);

        label_10 = new QLabel(myVerticalWidget);
        label_10->setObjectName("label_10");
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_4->addWidget(label_10);


        gridLayout_2->addWidget(myVerticalWidget, 0, 0, 1, 1);

        myVerticalWidget_4 = new QWidget(gridWidget_2);
        myVerticalWidget_4->setObjectName("myVerticalWidget_4");
        myVerticalWidget_4->setCursor(QCursor(Qt::SizeAllCursor));
        myVerticalWidget_4->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        verticalLayout_6 = new QVBoxLayout(myVerticalWidget_4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_16 = new QLabel(myVerticalWidget_4);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/images/icons8-student-64.png")));

        verticalLayout_6->addWidget(label_16);

        label_17 = new QLabel(myVerticalWidget_4);
        label_17->setObjectName("label_17");
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_6->addWidget(label_17);

        label_18 = new QLabel(myVerticalWidget_4);
        label_18->setObjectName("label_18");
        label_18->setFont(font2);
        label_18->setStyleSheet(QString::fromUtf8("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;"));

        verticalLayout_6->addWidget(label_18);


        gridLayout_2->addWidget(myVerticalWidget_4, 0, 3, 1, 1);

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
        label_3 = new QLabel(RoomScene);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(640, 30, 41, 31));
        playBtn = new QPushButton(RoomScene);
        playBtn->setObjectName("playBtn");
        playBtn->setGeometry(QRect(650, 60, 80, 18));

        retranslateUi(RoomScene);

        QMetaObject::connectSlotsByName(RoomScene);
    } // setupUi

    void retranslateUi(QWidget *RoomScene)
    {
        RoomScene->setWindowTitle(QCoreApplication::translate("RoomScene", "Form", nullptr));
        label_13->setText(QString());
        label_14->setText(QCoreApplication::translate("RoomScene", "Johnathan", nullptr));
        label_15->setText(QCoreApplication::translate("RoomScene", "Dimond 500", nullptr));
        label_9->setText(QString());
        label_7->setText(QCoreApplication::translate("RoomScene", "Johnathan", nullptr));
        label_8->setText(QCoreApplication::translate("RoomScene", "Dimond 500", nullptr));
        label_12->setText(QString());
        label_11->setText(QCoreApplication::translate("RoomScene", "Johnathan", nullptr));
        label_10->setText(QCoreApplication::translate("RoomScene", "Dimond 500", nullptr));
        label_16->setText(QString());
        label_17->setText(QCoreApplication::translate("RoomScene", "Johnathan", nullptr));
        label_18->setText(QCoreApplication::translate("RoomScene", "Dimond 500", nullptr));
        label->setText(QCoreApplication::translate("RoomScene", "    Johnathan", nullptr));
        label_2->setText(QCoreApplication::translate("RoomScene", "      gold: 2000", nullptr));
        label_3->setText(QCoreApplication::translate("RoomScene", "Level:", nullptr));
        playBtn->setText(QCoreApplication::translate("RoomScene", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomScene: public Ui_RoomScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMSCENE_H
