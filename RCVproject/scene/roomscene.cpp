#include "roomscene.h"
#include "ui_roomscene.h"

RoomScene::RoomScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RoomScene)
{
    ui->setupUi(this);
//    setStyleSheet("QWidget {background-image:url(D:/Networkprogramming/project/images/gold-frame.jpg)}");
    this->ui->gridLayout_2->setSpacing(20);
}

RoomScene::~RoomScene()
{
    delete ui;
}

Ui::RoomScene *RoomScene::getUi() const
{
    return ui;
}

void RoomScene::setUi(Ui::RoomScene *newUi)
{
    ui = newUi;
}

void RoomScene::on_label_linkActivated(const QString &link)
{
    this->ui->label->setText(link);
}


void RoomScene::on_label_2_linkActivated(const QString &link)
{
    this->ui->label_2->setText(link);
}


void RoomScene::on_roomname_linkActivated(const QString &link)
{
    this->ui->roomname->setText(link);
}

QWidget *RoomScene::createVerticalUser(QString username, QString rank)
{
    // Tạo widget và layout dọc
    QWidget* widget = new QWidget;
    QVBoxLayout* layout = new QVBoxLayout(widget);

    widget->setStyleSheet("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;");
    // Thêm các phần tử vào layout
    QLabel* labelImage = new QLabel();
    QLabel* labelName = new QLabel(username);
    QLabel* labelRank = new QLabel(rank);

    QPixmap pixmap(":/images/icons8-student-64.png");
    labelImage->setStyleSheet("background-color: #b8b8b8;"
                             "border: 2px solid black;"
                             "border-radius: 10px;");
    labelImage->setPixmap(pixmap);

    labelName->setStyleSheet("background-color: #b8b8b8;"
                        "border: 2px solid black;"
                        "border-radius: 10px;");
    QFont fontName("VNI-Duff", 12);

    labelName->setFont(fontName);

    QFont fontRank("VNI-Chancery", 12);
    labelRank->setStyleSheet("background-color: #b8b8b8;"
                            "border: 2px solid black;"
                            "border-radius: 10px;");
    labelRank->setFont(fontRank);
    layout->addWidget(labelImage);
    layout->addWidget(labelName);
    layout->addWidget(labelRank);

    // Thiết lập layout cho widget
    widget->setLayout(layout);

    return widget;
}

void RoomScene::addPlayer(QWidget *verticalUser, quint64 row, quint64 column)
{
    this->ui->gridLayout_2->addWidget(verticalUser, row, column);
}

QList<QPair<QString, QString> > RoomScene::getListUser() const
{
    return listUser;
}

void RoomScene::setListUser(const QList<QPair<QString, QString> > &newListUser)
{
    listUser = newListUser;
}


void RoomScene::on_level_linkActivated(const QString &link)
{
    this->ui->level->setText(link);
}


void RoomScene::on_playBtn_clicked()
{
    GameScene* gameScene = new GameScene();
    gameScene->show();
    gameScene->
    close();

}

