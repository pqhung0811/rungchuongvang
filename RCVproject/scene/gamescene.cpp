#include "gamescene.h"
#include "ui_gamescene.h"

GameScene::GameScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameScene)
{
    resultButton.append(0);
    resultButton.append(0);
    resultButton.append(0);
    resultButton.append(0);

    ui->setupUi(this);
    this->clientcore = ClientCore::getInstance();
}

GameScene::~GameScene()
{
    delete ui;
}

void GameScene::on_name_linkActivated(const QString &link)
{
    this->ui->name->setText(link);
}


void GameScene::on_rank_linkActivated(const QString &link)
{
    this->ui->rank->setText(link);
}

void GameScene::setupList()
{
    qDebug() << "\ngamescene list: " << this->questions;
    this->listButton = {this->ui->pushButton, this->ui->pushButton_2, this->ui->pushButton_3, this->ui->pushButton_4};

    for(int i=0; i<this->questions.size(); i++)
    {
        this->ui->label->setText(this->questions.at(i).first);
        QList<QPair<QString, quint64>> listAnswer;
        listAnswer = this->questions.at(i).second;
        qDebug() << "gamescene: " << listAnswer.size();
        for(int j=0; j<listAnswer.size(); j++) {
            QPushButton* button = listButton.at(j);
            button->setText(listAnswer.at(j).first);
            resultButton.replace(j, listAnswer.at(j).second);
        }
    }
}

QList<QPair<QString, QList<QPair<QString, quint64> > > > GameScene::getQuestions() const
{
    return questions;
}

void GameScene::setQuestions(const QList<QPair<QString, QList<QPair<QString, quint64> > > > &newQuestions)
{
    questions = newQuestions;
}

void GameScene::on_pushButton_clicked()
{
    if(this->resultButton.at(0)==1) {
        QMessageBox::information(this, "Correct Answer", "Your answer is correct!");
    }
    else {
        QMessageBox::information(this, "Wrong Answer", "Your answer is wrong!");
    }
}


void GameScene::on_pushButton_2_clicked()
{
    if(this->resultButton.at(1)==1) {
        QMessageBox::information(this, "Correct Answer", "Your answer is correct!");
    }
    else {
        QMessageBox::information(this, "Wrong Answer", "Your answer is wrong!");
    }
}


void GameScene::on_pushButton_3_clicked()
{
    if(this->resultButton.at(2)==1) {
        QMessageBox::information(this, "Correct Answer", "Your answer is correct!");
    }
    else {
        QMessageBox::information(this, "Wrong Answer", "Your answer is wrong!");
    }
}


void GameScene::on_pushButton_4_clicked()
{
    if(this->resultButton.at(3)==1) {
        QMessageBox::information(this, "Correct Answer", "Your answer is correct!");
    }
    else {
        QMessageBox::information(this, "Wrong Answer", "Your answer is wrong!");
    }
}


void GameScene::on_remainQuestion_linkActivated(const QString &link)
{

}


void GameScene::on_level_linkActivated(const QString &link)
{
    this->ui->level->setText(link);
}


void GameScene::on_roomname_linkActivated(const QString &link)
{
    this->ui->roomname->setText(link);
}

