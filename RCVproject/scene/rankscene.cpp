#include "rankscene.h"
#include "ui_rankscene.h"

RankScene::RankScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RankScene)
{
    ui->setupUi(this);
}

RankScene::~RankScene()
{
    delete ui;
}

void RankScene::setupList()
{
    this->model = new QStandardItemModel();
    model->setColumnCount(4); // Số lượng cột
    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Name");
    model->setHeaderData(2, Qt::Horizontal, "Rank");
    model->setHeaderData(3, Qt::Horizontal, "Rank Score");

    for(int i=0; i<this->userIds.size(); ++i) {
        //    for (const auto& room : roomList) {
        QList<QStandardItem*> rowItems;
        rowItems << new QStandardItem(QString::number(this->userIds.at(i)));
        rowItems << new QStandardItem(this->usernames.at(i));
        if(this->ranked.at(i)==0) {
            rowItems << new QStandardItem("Bronze");
        }
        else if(this->ranked.at(i)==1) {
            rowItems << new QStandardItem("Silver");
        }
        else {
            rowItems << new QStandardItem("Gold");
        }
        rowItems << new QStandardItem(QString::number(this->rankScore.at(i)));
        //        rowItems << new QStandardItem(room.first);
        //        rowItems << new QStandardItem(room.second);
        model->appendRow(rowItems);
    }
    ui->ListRankView->setModel(model);

    // Đặt đối tượng mô hình dữ liệu tùy chỉnh
    QItemSelectionModel* selectionModel = new QItemSelectionModel(model);
    ui->ListRankView->setSelectionModel(selectionModel);
    // Thiết lập chế độ bôi đen hàng cảu QTableView

    ui->ListRankView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->ListRankView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->ListRankView->setItemDelegate(new NoEditDelegate(ui->ListRankView));

    // Thiết lập stylesheet cho thanh cuộn
    QScrollBar *verticalScrollBar = this->ui->scrollArea->verticalScrollBar();
    verticalScrollBar->setStyleSheet("background-color: #FF0000;");
    QScrollBar *horizontalScrollBar = this->ui->scrollArea->horizontalScrollBar();
    horizontalScrollBar->setStyleSheet("background-color: #00FF00;");

    //    connect(selectionModel, &QItemSelectionModel::selectionChanged, this, &ListRoomScene::onSelectionChanged);
    connect(selectionModel, &QItemSelectionModel::selectionChanged, this, std::bind(&RankScene::onSelectionChanged, this, std::placeholders::_1, std::placeholders::_2, model));
}

void RankScene::onSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected, QStandardItemModel *model)
{
    // Lấy dữ liệu hàng được bôi đen
    QModelIndexList selectedIndexes = selected.indexes();
    if (!selectedIndexes.isEmpty()) {
        int row = selectedIndexes.first().row();
    }
}

QList<QString> RankScene::getUsernames() const
{
    return usernames;
}

void RankScene::setUsernames(const QList<QString> &newUsernames)
{
    usernames = newUsernames;
}

void RankScene::on_label_3_linkActivated(const QString &link)
{
    this->ui->label_3->setText(link);
}


void RankScene::on_label_5_linkActivated(const QString &link)
{
    this->ui->label_5->setText(link);
}

//ClientManager *RankScene::getClientManager() const
//{
//    return clientManager;
//}

//void RankScene::setClientManager(ClientManager *newClientManager)
//{
//    clientManager = newClientManager;
//}

QList<quint64> RankScene::getRankScore() const
{
    return rankScore;
}

void RankScene::setRankScore(const QList<quint64> &newRankScore)
{
    rankScore = newRankScore;
}

QList<quint64> RankScene::getRanked() const
{
    return ranked;
}

void RankScene::setRanked(const QList<quint64> &newRanked)
{
    ranked = newRanked;
}

QList<quint64> RankScene::getUserIds() const
{
    return userIds;
}

void RankScene::setUserIds(const QList<quint64> &newUserIds)
{
    userIds = newUserIds;
}

void RankScene::on_pushButton_clicked()
{
    HomeScene* homeScene = new HomeScene();
    homeScene->on_label_2_linkActivated(this->ui->label_3->text());
    homeScene->on_label_3_linkActivated(this->ui->label_5->text());
//    homeScene->setClientManager(this->clientManager);
    homeScene->show();
    close();
}

