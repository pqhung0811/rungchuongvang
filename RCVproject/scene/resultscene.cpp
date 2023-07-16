#include "resultscene.h"
#include "ui_resultscene.h"

ResultScene::ResultScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ResultScene)
{
    ui->setupUi(this);
}

ResultScene::~ResultScene()
{
    delete ui;
}

void ResultScene::on_name_linkActivated(const QString &link)
{
    this->ui->name->setText(link);
}


void ResultScene::on_rank_linkActivated(const QString &link)
{
    this->ui->rank->setText(link);
}

void ResultScene::setupList()
{
    this->model = new QStandardItemModel();
    model->setColumnCount(2); // Số lượng cột
    model->setHeaderData(0, Qt::Horizontal, "Name");
    model->setHeaderData(1, Qt::Horizontal, "Score");

    for(int i=0; i<this->usernames.size(); ++i) {
        QList<QStandardItem*> rowItems;

        rowItems << new QStandardItem(this->usernames.at(i));
        rowItems << new QStandardItem(QString::number(this->scores.at(i)));

        model->appendRow(rowItems);
    }
    ui->ListResultView->setModel(model);

    // Đặt đối tượng mô hình dữ liệu tùy chỉnh
    QItemSelectionModel* selectionModel = new QItemSelectionModel(model);
    ui->ListResultView->setSelectionModel(selectionModel);
    // Thiết lập chế độ bôi đen hàng cảu QTableView

    ui->ListResultView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->ListResultView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->ListResultView->setItemDelegate(new NoEditDelegate(ui->ListResultView));

    // Thiết lập stylesheet cho thanh cuộn
    QScrollBar *verticalScrollBar = this->ui->scrollArea->verticalScrollBar();
    verticalScrollBar->setStyleSheet("background-color: #FF0000;");
    QScrollBar *horizontalScrollBar = this->ui->scrollArea->horizontalScrollBar();
    horizontalScrollBar->setStyleSheet("background-color: #00FF00;");
}

ClientCore *ResultScene::getClientCore() const
{
    return clientCore;
}

void ResultScene::setClientCore(ClientCore *newClientCore)
{
    clientCore = newClientCore;
}

QList<QString> ResultScene::getUsernames() const
{
    return usernames;
}

void ResultScene::setUsernames(const QList<QString> &newUsernames)
{
    usernames = newUsernames;
}

QList<quint64> ResultScene::getScores() const
{
    return scores;
}

void ResultScene::setScores(const QList<quint64> &newScores)
{
    scores = newScores;
}

void ResultScene::on_back_clicked()
{
    HomeScene* homeScene = new HomeScene();
    homeScene->setClientCore(this->clientCore);
    homeScene->on_label_2_linkActivated(this->ui->name->text());
    homeScene->on_label_3_linkActivated(this->ui->rank->text());
    homeScene->show();
    close();
}

