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

    QPixmap pixmap(":/images/icons8-school-48.png");
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

    labelImage->setMinimumSize(100, 50);
    labelId->setMinimumSize(50, 25);
    labelName->setMinimumSize(50, 25);
    buttonJoin->setMinimumSize(50, 25);

    layout->addWidget(labelImage);
    layout->addWidget(labelId);
    layout->addWidget(labelName);
    layout->addWidget(buttonJoin);

    layout->setStretchFactor(labelImage, 2);
    layout->setStretchFactor(labelId, 1);
    layout->setStretchFactor(labelName, 1);
    layout->setStretchFactor(buttonJoin, 1);

    // Thiết lập layout cho widget
    widget->setLayout(layout);

    return widget;
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
    homeScene->on_label_2_linkActivated(this->ui->label_2->text());
    homeScene->on_label_3_linkActivated(this->ui->label_3->text());
    homeScene->show();
    hide();
}

void ListRoomScene::addRoom(QWidget *verticalRoom, quint64 row, quint64 column)
{
    qDebug() << "print row col: " << row << " " << column;
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
