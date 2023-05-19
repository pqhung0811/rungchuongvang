
#ifndef STATUSCODE_H
#define STATUSCODE_H


#include <QObject>

class StatusCode : public QObject
{
    Q_OBJECT

public:
    explicit StatusCode(QObject *parent = nullptr);
    enum Status {
        SUCCESS,
        ERROR
    };
    Q_ENUM(Status)

public slots:
    Status getStatus() const;
    void setStatus(Status newStatus);
    QString getStatusCodeString();
    /*Status*/ void toStatusCode(QString inputString);

private:
    Status status;

signals:

};

#endif // STATUSCODE_H
