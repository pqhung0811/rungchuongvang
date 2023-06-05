
#include "servercore.h"

QMap<quint64, QTcpSocket *> ServerCore::getConnectionSet() const
{
    return connectionSet;
}

void ServerCore::setConnectionSet(const QMap<quint64, QTcpSocket *> &newConnectionSet)
{
    connectionSet = newConnectionSet;
}

ServerCore::ServerCore(QObject *parent)
    : QObject{parent}
{
    this->server = new QTcpServer(this);
    connect(server, &QTcpServer::newConnection, this, &ServerCore::onNewConnection);
}

void ServerCore::start() {
    if(this->server->listen(QHostAddress::Any, 8080))
    {
        connect(this->server, &QTcpServer::newConnection, this, &ServerCore::onNewConnection);
        qDebug() << ("Server is listening...");
    }
    else
    {
        qDebug() << QString("Unable to start the server: %1.").arg(this->server->errorString());
        exit(EXIT_FAILURE);
    }
}

void ServerCore::onNewConnection() {
    QTcpSocket *clientSocket = this->server->nextPendingConnection();

    // Handle the new client connection asynchronously
    connect(clientSocket, &QTcpSocket::readyRead, this, &ServerCore::onReadyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &ServerCore::onDisconnected);

    // Add the client socket to a list or data structure for managing multiple clients
//    this->connectionSet.append(clientSocket);

    qDebug() << "New client connected!";
}

void ServerCore::onReadyRead() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    ServerCreateMessage* serverCreateMessage = new ServerCreateMessage();
    QString responseString;

    qDebug() << "con cac";
    if (clientSocket)
    {
        // Read and process data from the client
        QByteArray requestData = clientSocket->readAll();
        qDebug() << "request Data: " << requestData;
        // Process the requestData as needed
        QJsonDocument jsonDoc = QJsonDocument::fromJson(requestData);
        QString msg;

        // Kiểm tra xem dữ liệu có đúng định dạng JSON không
        if (!jsonDoc.isNull() && jsonDoc.isObject()) {
            // Chuyển đổi QJsonDocument thành QJsonObject
            QJsonObject jsonObject = jsonDoc.object();
            serverCreateMessage->getRequestProcessing()->setMessage(jsonObject);
//            requestProcessing->setMessage(jsonObject);
            msg = serverCreateMessage->getRequestProcessing()->handle();
            responseString = serverCreateMessage->createMessage(msg);

            if(msg.compare("login successfully")==0) {
                connectionSet.insert(serverCreateMessage->getRequestProcessing()->getUser()->getId(), clientSocket);
            }
        }
        if(!this->connectionSet.isEmpty()) {
            quint64 a = this->connectionSet.firstKey();
        }

        if(msg.contains("requestjoin")) {
            quint64 ownerId;
            QByteArray responseData = requestData;
            QStringList parts = msg.split(" ");
            if (parts.size() == 2) {
                QString ownerIdStr = parts[1];
                ownerId = ownerIdStr.toInt();
            } else {
                qDebug() << "Invalid string format";
            }
            connectionSet.value(ownerId)->write(responseData);
        }
        else if(msg.contains("deny") || msg.contains("accept")) {
            quint64 userId;
            QByteArray responseData = msg.toUtf8();;
            QStringList parts = msg.split(" ");
            if (parts.size() == 2) {
                QString userIdStr = parts[1];
                userId = userIdStr.toInt();
            } else {
                qDebug() << "Invalid string format";
            }
            connectionSet.value(userId)->write(responseData);
        }
        else {
            QByteArray responseData = responseString.toUtf8();
            // Send response back to the client
            clientSocket->write(responseData);
        }
    }
}

void ServerCore::onDisconnected() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket)
    {
        // Remove the client socket from the list or data structure
//        connectionSet.removeOne(clientSocket);
//        connectionSet.remove(2);
        auto it = connectionSet.begin();
        while (it != connectionSet.end()) {
            if (it.value() == clientSocket) {
                it = connectionSet.erase(it);
            } else {
                ++it;
            }
        }

        // Clean up the socket
        clientSocket->deleteLater();

        qDebug() << "Client disconnected!";
    }
}


