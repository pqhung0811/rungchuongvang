
#include "createroomdialog.h"

CreateRoomDialog::CreateRoomDialog(QWidget* parent)
    : QDialog(parent)
{
    lineEdit = new QLineEdit(this);
    okButton = new QPushButton("OK", this);
    cancelButton = new QPushButton("Cancel", this);

    connect(okButton, &QPushButton::clicked, this, &CreateRoomDialog::onOkButtonClicked);
    connect(cancelButton, &QPushButton::clicked, this, &CreateRoomDialog::onCancelButtonClicked);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(lineEdit);
    layout->addWidget(okButton);
    layout->addWidget(cancelButton);
    setLayout(layout);
}

void CreateRoomDialog::onOkButtonClicked()
{
    this->roomname = lineEdit->text();
    // Xử lý dữ liệu khi nhấn nút OK
    accept(); // Đóng dialog với kết quả chấp nhận
}

void CreateRoomDialog::onCancelButtonClicked()
{
    reject(); // Đóng dialog với kết quả từ chối
}

QString CreateRoomDialog::getRoomname() const
{
    return roomname;
}

void CreateRoomDialog::setRoomname(const QString &newRoomname)
{
    roomname = newRoomname;
}
