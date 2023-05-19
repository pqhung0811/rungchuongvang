/********************************************************************************
** Form generated from reading UI file 'homescene.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCENE_H
#define UI_HOMESCENE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeScene
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *playNowBtn;
    QPushButton *createRoomBtn;
    QPushButton *findRoomBtn;
    QPushButton *rankBtn;
    QPushButton *signOutBtn;
    QPushButton *quitBtn;
    QFrame *frame_4;
    QLabel *label_2;
    QFrame *frame_5;
    QLabel *label_3;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_7;

    void setupUi(QWidget *HomeScene)
    {
        if (HomeScene->objectName().isEmpty())
            HomeScene->setObjectName("HomeScene");
        HomeScene->resize(344, 505);
        HomeScene->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(187, 225, 96, 255), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(HomeScene);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 110, 191, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font.setPointSize(24);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(161, 151, 57, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayoutWidget = new QWidget(HomeScene);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(100, 190, 151, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        playNowBtn = new QPushButton(verticalLayoutWidget);
        playNowBtn->setObjectName("playNowBtn");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("VNI-Duff")});
        font1.setPointSize(15);
        playNowBtn->setFont(font1);
        playNowBtn->setCursor(QCursor(Qt::ArrowCursor));
        playNowBtn->setMouseTracking(false);
        playNowBtn->setAutoFillBackground(false);
        playNowBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(207, 57, 71, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/play.png"), QSize(), QIcon::Selected, QIcon::On);
        playNowBtn->setIcon(icon);
        playNowBtn->setIconSize(QSize(20, 20));
        playNowBtn->setAutoDefault(false);
        playNowBtn->setFlat(false);

        verticalLayout->addWidget(playNowBtn);

        createRoomBtn = new QPushButton(verticalLayoutWidget);
        createRoomBtn->setObjectName("createRoomBtn");
        createRoomBtn->setFont(font1);
        createRoomBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(207, 57, 71, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/create.png"), QSize(), QIcon::Normal, QIcon::Off);
        createRoomBtn->setIcon(icon1);
        createRoomBtn->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(createRoomBtn);

        findRoomBtn = new QPushButton(verticalLayoutWidget);
        findRoomBtn->setObjectName("findRoomBtn");
        findRoomBtn->setFont(font1);
        findRoomBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(207, 57, 71, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/findroom.png"), QSize(), QIcon::Normal, QIcon::Off);
        findRoomBtn->setIcon(icon2);
        findRoomBtn->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(findRoomBtn);

        rankBtn = new QPushButton(verticalLayoutWidget);
        rankBtn->setObjectName("rankBtn");
        rankBtn->setFont(font1);
        rankBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(207, 57, 71, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/rank.png"), QSize(), QIcon::Normal, QIcon::Off);
        rankBtn->setIcon(icon3);
        rankBtn->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(rankBtn);

        signOutBtn = new QPushButton(verticalLayoutWidget);
        signOutBtn->setObjectName("signOutBtn");
        signOutBtn->setFont(font1);
        signOutBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(207, 57, 71, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        signOutBtn->setIcon(icon4);
        signOutBtn->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(signOutBtn);

        quitBtn = new QPushButton(verticalLayoutWidget);
        quitBtn->setObjectName("quitBtn");
        quitBtn->setFont(font1);
        quitBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(207, 57, 71, 255), stop:1 rgba(255, 255, 255, 255));"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        quitBtn->setIcon(icon5);
        quitBtn->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(quitBtn);

        frame_4 = new QFrame(HomeScene);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(20, 10, 171, 31));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 15px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 171, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font2.setPointSize(18);
        label_2->setFont(font2);
        frame_5 = new QFrame(HomeScene);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(10, 60, 121, 21));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid gold; border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_5);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 121, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Swis721 Ex BT")});
        font3.setBold(true);
        label_3->setFont(font3);
        frame_2 = new QFrame(HomeScene);
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
        frame_7 = new QFrame(HomeScene);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(0, 50, 31, 31));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 15px; border: 1px solid gold;\n"
"background-image: url(:/images/icons8-gold-medal-30.png);\n"
""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        retranslateUi(HomeScene);

        playNowBtn->setDefault(false);


        QMetaObject::connectSlotsByName(HomeScene);
    } // setupUi

    void retranslateUi(QWidget *HomeScene)
    {
        HomeScene->setWindowTitle(QCoreApplication::translate("HomeScene", "Form", nullptr));
        label->setText(QCoreApplication::translate("HomeScene", "Home Scene", nullptr));
        playNowBtn->setText(QCoreApplication::translate("HomeScene", "Play Now", nullptr));
        createRoomBtn->setText(QCoreApplication::translate("HomeScene", "Create Room", nullptr));
        findRoomBtn->setText(QCoreApplication::translate("HomeScene", "Find Room", nullptr));
        rankBtn->setText(QCoreApplication::translate("HomeScene", "Rank", nullptr));
        signOutBtn->setText(QCoreApplication::translate("HomeScene", "Sign Out", nullptr));
        quitBtn->setText(QCoreApplication::translate("HomeScene", "Quit", nullptr));
        label_2->setText(QCoreApplication::translate("HomeScene", "    Johnathan", nullptr));
        label_3->setText(QCoreApplication::translate("HomeScene", "      gold: 2000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeScene: public Ui_HomeScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCENE_H
