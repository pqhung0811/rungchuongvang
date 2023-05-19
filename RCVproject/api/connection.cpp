
#include "connection.h"
#include <QtSql/QSqlDatabase>

Connection::Connection(QObject *parent)
    : QObject{parent}
{

}

bool Connection::setConnection() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/Networkprogramming/project/qtPrj/RCVdb.db");
    if(!db.open()) {
        printf("not connected");
        return false;
    }
    return true;
}

