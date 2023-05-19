
#include "statuscode.h"

StatusCode::StatusCode(QObject *parent)
    : QObject{parent}
{

}

QString StatusCode::getStatusCodeString()
{
    switch (this->status) {
    case SUCCESS:
        return "success";
    case ERROR:
        return "error";
    }
    return QString();
}

/*StatusCode::Status*/ void StatusCode::toStatusCode(QString inputString)
{
    if (inputString.compare("success", Qt::CaseInsensitive) == 0) {
        this->status = SUCCESS;
//        return SUCCESS;
    } else if (inputString.compare("error", Qt::CaseInsensitive) == 0) {
        this->status = ERROR;
//        return ERROR;
    }
    else {
        return;
    }
//    return static_cast<Status>(-1);
}

StatusCode::Status StatusCode::getStatus() const
{
    return this->status;
}

void StatusCode::setStatus(Status newStatus)
{
    this->status = newStatus;
}
