
#ifndef CONNECTION_H
#define CONNECTION_H

#include <QObject>

#include <QtSql/QSqlDatabase>

class Connection : public QObject
{
Q_OBJECT

public:
    explicit Connection(QObject *parent = nullptr);

public slots:
    bool setConnection();

signals:
};

#endif // CONNECTION_H
