#include "listroomscene.h"
#include "ui_listroomscene.h"

ListRoomScene::ListRoomScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListRoomScene)
{
    ui->setupUi(this);
}



ListRoomScene::~ListRoomScene()
{
    delete ui;
}

void ListRoomScene::onSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected, QStandardItemModel* model)
{
    // Lấy dữ liệu hàng được bôi đen
    QModelIndexList selectedIndexes = selected.indexes();
    if (!selectedIndexes.isEmpty()) {
        int row = selectedIndexes.first().row();
        QVariant roomId = model->data(model->index(row, 0)); // Dữ liệu cột ID
        QVariant roomName = model->data(model->index(row, 1)); // Dữ liệu cột Name

        // Đến phòng chơi tương ứng với roomId và roomName
        // Code xử lý tương ứng
    }
}

void ListRoomScene::setupList()
{
    model = new QStandardItemModel();
    model->setColumnCount(2); // Số lượng cột
    model->setHeaderData(0, Qt::Horizontal, "ID"); // Tiêu đề cột ID
    model->setHeaderData(1, Qt::Horizontal, "Name"); // Tiêu đề cột Name

    qDebug() << "listroom size: " << this->roomIds.size();
    // Thêm dữ liệu phòng chơi
    //    QList<QPair<int, QString>> roomList;
    //    roomList << QPair<int, QString>(1, "Room 1")
    //             << QPair<int, QString>(2, "Room 2")
    //             << QPair<int, QString>(3, "Room 3");

    for(int i=0; i<this->roomIds.size(); ++i) {
        //    for (const auto& room : roomList) {
        QList<QStandardItem*> rowItems;
        qDebug() << "list room scene: " << this->roomIds.at(i);
        rowItems << new QStandardItem(QString::number(this->roomIds.at(i)));
        rowItems << new QStandardItem(this->roomnames.at(i));
        //        rowItems << new QStandardItem(room.first);
        //        rowItems << new QStandardItem(room.second);
        model->appendRow(rowItems);
    }
    ui->ListRoomView->setModel(model);

    // Đặt đối tượng mô hình dữ liệu tùy chỉnh
    QItemSelectionModel* selectionModel = new QItemSelectionModel(model);
    ui->ListRoomView->setSelectionModel(selectionModel);
    // Thiết lập chế độ bôi đen hàng cảu QTableView

    ui->ListRoomView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->ListRoomView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->ListRoomView->setItemDelegate(new NoEditDelegate(ui->ListRoomView));
    //    connect(selectionModel, &QItemSelectionModel::selectionChanged, this, &ListRoomScene::onSelectionChanged);
    connect(selectionModel, &QItemSelectionModel::selectionChanged, this, std::bind(&ListRoomScene::onSelectionChanged, this, std::placeholders::_1, std::placeholders::_2, model));
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

QList<quint64> ListRoomScene::getRoomIds() const
{
    return roomIds;
}

void ListRoomScene::setRoomIds(const QList<quint64> &newRoomIds)
{
    roomIds = newRoomIds;
}

void ListRoomScene::on_pushButton_clicked()
{
    HomeScene* homeScene = new HomeScene();
    homeScene->on_label_2_linkActivated(this->ui->label_2->text());
    homeScene->on_label_3_linkActivated(this->ui->label_3->text());
    homeScene->show();
    hide();
}

