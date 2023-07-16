#include "listroomscene.h"
#include "ui_listroomscene.h"

ListRoomScene::ListRoomScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListRoomScene)
{
    ui->setupUi(this);
    this->ui->gridLayout_2->setSpacing(20);
    this->row = 0;
    this->column = 0;
    button = 0;
}

ListRoomScene::~ListRoomScene()
{
    delete ui;
}

QList<QString> ListRoomScene::getRoomnames() const
{
    return roomnames;
}

void ListRoomScene::setRoomnames(const QList<QString> &newRoomnames)
{
    roomnames = newRoomnames;
}


void ListRoomScene::on_label_2_linkActivated(const QString &link)
{
    this->ui->label_2->setText(link);
}


void ListRoomScene::on_label_3_linkActivated(const QString &link)
{
    this->ui->label_3->setText((link));
}

QWidget *ListRoomScene::createVerticalRoom(quint64 id, QString roomname)
{
    // Tạo widget và layout dọc
    QWidget* widget = new QWidget;
    QVBoxLayout* layout = new QVBoxLayout(widget);

    widget->setStyleSheet("background-color: #b8b8b8; border: 2px solid black; border-radius: 10px;");
    // Thêm các phần tử vào layout
    QLabel* labelImage = new QLabel();
    QLabel* labelId = new QLabel(QString::number(id));
    QLabel* labelName = new QLabel(roomname);
    QPushButton* buttonJoin = new QPushButton();

    QPixmap pixmap(":/images/icons8-school-96.png");
    labelImage->setStyleSheet("background-color: #b8b8b8;"
                              "border: 2px solid black;"
                              "border-radius: 10px;");
    labelImage->setPixmap(pixmap);

    labelId->setStyleSheet("background-color: #b8b8b8;"
                             "border: 2px solid black;"
                             "border-radius: 10px;");
    QFont fontName("VNI-Duff", 12);

    labelId->setFont(fontName);
    labelId->setAlignment(Qt::AlignCenter);

    QFont fontRank("VNI-Chancery", 12);
    labelName->setStyleSheet("background-color: #b8b8b8;"
                             "border: 2px solid black;"
                             "border-radius: 10px;");
    labelName->setFont(fontRank);
    labelName->setAlignment(Qt::AlignCenter);

    QFont fontJoin("Segoe UI Variable Text Semibold", 15);
    buttonJoin->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(207, 57, 71, 255), "
                              "stop:1 rgba(255, 255, 255, 255));border: 2px solid black; border-radius: 5px;");
    buttonJoin->setText("Join Room");
    buttonJoin->setFont(fontJoin);

    connect(buttonJoin, &QPushButton::clicked, this, [this, id](){
        handleButtonClick(id);
    });

    labelImage->setMinimumSize(131, 100);
    labelId->setFixedSize(131, 25);
    labelName->setFixedSize(131, 25);
    buttonJoin->setFixedSize(131, 25);

    layout->addWidget(labelImage);
    layout->addWidget(labelId);
    layout->addWidget(labelName);
    layout->addWidget(buttonJoin);

    // Thiết lập layout cho widget
    widget->setLayout(layout);

    return widget;
}

void ListRoomScene::handleButtonClick(quint64 id)
{
    this->clientCore->requestJoinRoom(id);
    connect(clientCore, &ClientCore::Finished, this, &ListRoomScene::handleJoinRoomResponse);
}

void ListRoomScene::handleJoinRoomResponse(const QJsonDocument &response)
{
    QList<QString> usernames;
    QList<quint64> scores;
    QList<QString> scoreStr;
    QString roomname;
    if (!response.isNull() && response.isObject()) {
        QJsonObject jsonObject = response.object();

        if (jsonObject.contains("command_code") && jsonObject["command_code"].isString()) {
            if(jsonObject["command_code"].toString().compare("RESPONSEJOINROOM")!=0) return;
        }

        if (jsonObject.contains("reply") && jsonObject["reply"].isString()) {
            if(jsonObject["reply"].toString().compare("0")==0) return;
        }

        if (jsonObject.contains("info") && jsonObject["info"].isString()) {
            QString infoString = jsonObject["info"].toString();
            QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

            if(infoObject.contains("username") && infoObject["username"].isArray()) {
                QJsonArray usernamesArray = infoObject.value("username").toArray();
                for (const QJsonValue& value : usernamesArray) {
                    usernames.append(value.toString());
                }
            }

            if (infoObject.contains("roomname") && infoObject["roomname"].isString()) {
                roomname = infoObject["roomname"].toString();
            }

            if(infoObject.contains("score") && infoObject["score"].isArray()) {
                QJsonArray rankscoreArray = infoObject.value("score").toArray();
                for (const QJsonValue& value : rankscoreArray) {
                    scores.append(value.toInt());
                }
            }
        }
    }

    RoomScene* roomScene = new RoomScene();
    roomScene->setClientCore(this->clientCore);
    roomScene->on_roomname_linkActivated(roomname);
    roomScene->on_label_linkActivated(this->ui->label_2->text());
    roomScene->on_label_2_linkActivated(this->ui->label_3->text());
    qDebug() << this->ui->label_3->text();

    if(this->ui->label_3->text().contains("Bronze")) {
        roomScene->on_level_linkActivated("Level: Bronze");
        for(int i = 0; i<scores.size(); i++) {
            QString s = "Bronze: " + QString::number(scores.at(i));
            scoreStr.append(s);
        }
    }
    else if(this->ui->label_3->text().contains("Silver")) {
        roomScene->on_level_linkActivated("Level: Silver");
        for(int i = 0; i<scores.size(); i++) {
            QString s = "Silver: " + QString::number(scores.at(i));
            scoreStr.append(s);
        }
    }
    else {
        roomScene->on_level_linkActivated("Level: Gold");
        for(int i = 0; i<scores.size(); i++) {
            QString s = "Gold: " + QString::number(scores.at(i));
            scoreStr.append(s);
        }
    }

    roomScene->setUsernames(usernames);
    roomScene->setRankscore(scoreStr);
    roomScene->setupLayout();
    roomScene->disablePlayButton();
    this->disconnectSignal();
    roomScene->connectSignal();
    roomScene->show();
    this->close();
}

void ListRoomScene::disconnectSignal()
{
    disconnect(clientCore, &ClientCore::Finished, this, &ListRoomScene::handleJoinRoomResponse);
}

ClientCore *ListRoomScene::getClientCore() const
{
    return clientCore;
}

void ListRoomScene::setClientCore(ClientCore *newClientCore)
{
    clientCore = newClientCore;
}

void ListRoomScene::setUsername(const QString &newUsername)
{
    username = newUsername;
}

QList<quint64> ListRoomScene::getRoomIds() const
{
    return roomIds;
}

void ListRoomScene::setRoomIds(const QList<quint64> &newRoomIds)
{
    roomIds = newRoomIds;
}

void ListRoomScene::setupLayout()
{
    for(int i=0; i<this->roomIds.size(); ++i) {
        this->addRoom(this->createVerticalRoom(this->roomIds.at(i), this->roomnames.at(i)), row, column);
        if(column==4) {
            column = 0;
            row++;
        }
        else {
            column++;
        }
    }
}

void ListRoomScene::on_pushButton_clicked()
{
    HomeScene* homeScene = new HomeScene();
    homeScene->setClientCore(this->clientCore);
    homeScene->on_label_2_linkActivated(this->ui->label_2->text());
    homeScene->on_label_3_linkActivated(this->ui->label_3->text());
    homeScene->show();
    close();
}

void ListRoomScene::addRoom(QWidget *verticalRoom, quint64 row, quint64 column)
{
    this->ui->gridLayout_2->addWidget(verticalRoom, row, column);

}

//void ListRoomScene::onSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected, QStandardItemModel* model)
//{
//    // Lấy dữ liệu hàng được bôi đen
//    QModelIndexList selectedIndexes = selected.indexes();
//    if (!selectedIndexes.isEmpty()) {
//        int row = selectedIndexes.first().row();
//        QVariant roomId = model->data(model->index(row, 0)); // Dữ liệu cột ID
//        QVariant roomName = model->data(model->index(row, 1)); // Dữ liệu cột Name

//        // Đến phòng chơi tương ứng với roomId và roomName
//        // Code xử lý tương ứng
//    }
//}

//void ListRoomScene::setupList()
//{
//    model = new QStandardItemModel();
//    model->setColumnCount(2); // Số lượng cột
//    model->setHeaderData(0, Qt::Horizontal, "ID"); // Tiêu đề cột ID
//    model->setHeaderData(1, Qt::Horizontal, "Name"); // Tiêu đề cột Name

//    qDebug() << "listroom size: " << this->roomIds.size();
//    // Thêm dữ liệu phòng chơi
//    //    QList<QPair<int, QString>> roomList;
//    //    roomList << QPair<int, QString>(1, "Room 1")
//    //             << QPair<int, QString>(2, "Room 2")
//    //             << QPair<int, QString>(3, "Room 3");

//    for(int i=0; i<this->roomIds.size(); ++i) {
//        //    for (const auto& room : roomList) {
//        QList<QStandardItem*> rowItems;
//        qDebug() << "list room scene: " << this->roomIds.at(i);
//        rowItems << new QStandardItem(QString::number(this->roomIds.at(i)));
//        rowItems << new QStandardItem(this->roomnames.at(i));
//        //        rowItems << new QStandardItem(room.first);
//        //        rowItems << new QStandardItem(room.second);
//        model->appendRow(rowItems);
//    }
//    ui->ListRoomView->setModel(model);

//    // Đặt đối tượng mô hình dữ liệu tùy chỉnh
//    QItemSelectionModel* selectionModel = new QItemSelectionModel(model);
//    ui->ListRoomView->setSelectionModel(selectionModel);
//    // Thiết lập chế độ bôi đen hàng cảu QTableView

//    ui->ListRoomView->setSelectionMode(QAbstractItemView::SingleSelection);
//    ui->ListRoomView->setSelectionBehavior(QAbstractItemView::SelectRows);
//    ui->ListRoomView->setItemDelegate(new NoEditDelegate(ui->ListRoomView));
//    //    connect(selectionModel, &QItemSelectionModel::selectionChanged, this, &ListRoomScene::onSelectionChanged);
//    connect(selectionModel, &QItemSelectionModel::selectionChanged, this, std::bind(&ListRoomScene::onSelectionChanged, this, std::placeholders::_1, std::placeholders::_2, model));
//}
