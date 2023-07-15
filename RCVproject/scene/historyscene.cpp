#include "historyscene.h"
#include "ui_historyscene.h"

HistoryScene::HistoryScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HistoryScene)
{
    ui->setupUi(this);
}

HistoryScene::~HistoryScene()
{
    delete ui;
}

void HistoryScene::on_name_linkActivated(const QString &link)
{
    this->ui->name->setText(link);
}


void HistoryScene::on_rank_linkActivated(const QString &link)
{
    this->ui->rank->setText(link);
}

ClientCore *HistoryScene::getClientCore() const
{
    return clientCore;
}

void HistoryScene::setClientCore(ClientCore *newClientCore)
{
    clientCore = newClientCore;
}

QList<QString> HistoryScene::getEndgames() const
{
    return endgames;
}

void HistoryScene::setEndgames(const QList<QString> &newEndgames)
{
    endgames = newEndgames;
}

void HistoryScene::setupList()
{
    this->model = new QStandardItemModel();
    model->setColumnCount(4); // Số lượng cột
    model->setHeaderData(0, Qt::Horizontal, "Top");
    model->setHeaderData(1, Qt::Horizontal, "Score");
    model->setHeaderData(2, Qt::Horizontal, "Start time");
    model->setHeaderData(3, Qt::Horizontal, "End time");

    for(int i=0; i<this->tops.size(); i++) {
        QList<QStandardItem*> rowItems;
        rowItems << new QStandardItem(QString::number(this->tops.at(i)));
        rowItems << new QStandardItem(QString::number(this->scores.at(i)));
        rowItems << new QStandardItem(this->startgames.at(i));
        rowItems << new QStandardItem(this->endgames.at(i));
        model->appendRow(rowItems);
    }

    ui->ListHistoryView->setModel(model);

    // Đặt đối tượng mô hình dữ liệu tùy chỉnh
    QItemSelectionModel* selectionModel = new QItemSelectionModel(model);
    ui->ListHistoryView->setSelectionModel(selectionModel);
    // Thiết lập chế độ bôi đen hàng cảu QTableView

    ui->ListHistoryView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->ListHistoryView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->ListHistoryView->setItemDelegate(new NoEditDelegate(ui->ListHistoryView));

    // Thiết lập stylesheet cho thanh cuộn
    QScrollBar *verticalScrollBar = this->ui->scrollArea->verticalScrollBar();
    verticalScrollBar->setStyleSheet("background-color: #FF0000;");
    QScrollBar *horizontalScrollBar = this->ui->scrollArea->horizontalScrollBar();
    horizontalScrollBar->setStyleSheet("background-color: #00FF00;");

    //    connect(selectionModel, &QItemSelectionModel::selectionChanged, this, &ListRoomScene::onSelectionChanged);
    connect(selectionModel, &QItemSelectionModel::selectionChanged, this, std::bind(&HistoryScene::onSelectionChanged, this, std::placeholders::_1, std::placeholders::_2, model));
}

void HistoryScene::onSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected, QStandardItemModel *model)
{
    // Lấy dữ liệu hàng được bôi đen
    QModelIndexList selectedIndexes = selected.indexes();
    if (!selectedIndexes.isEmpty()) {
        int row = selectedIndexes.first().row();
    }
}

QList<QString> HistoryScene::getStartgames() const
{
    return startgames;
}

void HistoryScene::setStartgames(const QList<QString> &newStartgames)
{
    startgames = newStartgames;
}

QList<quint64> HistoryScene::getScores() const
{
    return scores;
}

void HistoryScene::setScores(const QList<quint64> &newScores)
{
    scores = newScores;
}

QList<quint64> HistoryScene::getTops() const
{
    return tops;
}

void HistoryScene::setTops(const QList<quint64> &newTops)
{
    tops = newTops;
}


void HistoryScene::on_back_clicked()
{
    HomeScene* homeScene = new HomeScene();
    homeScene->setClientCore(this->clientCore);
    homeScene->on_label_2_linkActivated(this->ui->name->text());
    homeScene->on_label_3_linkActivated(this->ui->rank->text());
    homeScene->show();
    close();
}

