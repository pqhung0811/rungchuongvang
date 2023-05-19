
#include "servermain.h"

ServerMain::ServerMain(QObject *parent)
    : QObject{parent}
{

}

//void onNewConnection(QTcpServer *server) {
//    QTcpSocket *socket = server->nextPendingConnection();
//    connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
//    connect(socket, SIGNAL(disconnected()), socket, SLOT(deleteLater()));
//}

//void onReadyRead() {
//    QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
//    if (!socket)
//        return;

//    QByteArray data = socket->readAll();
//    // Xử lý dữ liệu được gửi đến từ client
//}
