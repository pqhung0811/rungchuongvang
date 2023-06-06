#include "listroomscene.h"
#include "ui_listroomscene.h"

ListRoomScene::ListRoomScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListRoomScene)
{
    ui->setupUi(this);

    model = new QStandardItemModel();
    model->setColumnCount(2); // Số lượng cột
    model->setHeaderData(0, Qt::Horizontal, "ID"); // Tiêu đề cột ID
    model->setHeaderData(1, Qt::Horizontal, "Name"); // Tiêu đề cột Name

    // Thêm dữ liệu phòng chơi
    QList<QPair<int, QString>> roomList;
    roomList << QPair<int, QString>(1, "Room 1")
             << QPair<int, QString>(2, "Room 2")
             << QPair<int, QString>(3, "Room 3");

//    foreach (const QPair<int, QString>& room, roomList)
    for (const auto& room : roomList) {
        QList<QStandardItem*> rowItems;
        rowItems << new QStandardItem(QString::number(room.first)); // Cột ID
        rowItems << new QStandardItem(room.second); // Cột Name
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
