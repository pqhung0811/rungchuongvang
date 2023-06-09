
#ifndef CREATEROOMDIALOG_H
#define CREATEROOMDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

class CreateRoomDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateRoomDialog(QWidget* parent = nullptr);

    QString getRoomname() const;
    void setRoomname(const QString &newRoomname);

private slots:
    void onOkButtonClicked();
    void onCancelButtonClicked();

private:
    QString roomname;
    QLineEdit* lineEdit;
    QPushButton* okButton;
    QPushButton* cancelButton;
};

#endif // CREATEROOMDIALOG_H
