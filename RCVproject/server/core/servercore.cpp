
#include "servercore.h"

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
    this->connectionSet.append(clientSocket);

    qDebug() << "New client connected!";
}

void ServerCore::onReadyRead() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket)
    {
        // Read and process data from the client
        QByteArray requestData = clientSocket->readAll();
        // Process the requestData as needed

        // Send response back to the client
        QByteArray responseData = "Hello from server!";
        clientSocket->write(responseData);
    }
}

void ServerCore::onDisconnected() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket)
    {
        // Remove the client socket from the list or data structure
        connectionSet.removeOne(clientSocket);

        // Clean up the socket
        clientSocket->deleteLater();

        qDebug() << "Client disconnected!";
    }
}



