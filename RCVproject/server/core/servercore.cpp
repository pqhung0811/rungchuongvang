
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
    this->serverCreateMessage = new ServerCreateMessage();
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
    QString responseString;

    if (clientSocket)
    {
        // Read and process data from the client
        QByteArray requestData = clientSocket->readAll();
        // Process the requestData as needed
        QJsonDocument jsonDoc = QJsonDocument::fromJson(requestData);
        QString msg;

        qDebug() << "server core client: " << clientSocket;
        // Kiểm tra xem dữ liệu có đúng định dạng JSON không
        if (!jsonDoc.isNull() && jsonDoc.isObject()) {
            // Chuyển đổi QJsonDocument thành QJsonObject
            QJsonObject jsonObject = jsonDoc.object();
            serverCreateMessage->getRequestProcessing()->setMessage(jsonObject);
            msg = serverCreateMessage->getRequestProcessing()->handle();
            responseString = serverCreateMessage->createMessage(msg);

            if(msg.compare("login successfully")==0) {
                connectionSet.insert(serverCreateMessage->getRequestProcessing()->getUser()->getId(), clientSocket);
                qDebug() << "\nserver core set: " << serverCreateMessage->getRequestProcessing()->getUser()->getId() << "  " << clientSocket << "\n";
            }
        }

        if(msg.contains("requestjoin")) {
            quint64 ownerId;
            QStringList parts = msg.split(" ");
            if (parts.size() == 2) {
                QString ownerIdStr = parts[1];
                ownerId = ownerIdStr.toInt();
            } else {
                qDebug() << "Invalid string format";
            }
            QByteArray responseData = responseString.toUtf8();
            connectionSet.value(ownerId)->write(responseData);
        }
        else if(msg.contains("deny") || msg.contains("accept")) {
            quint64 userId;
            quint64 reply;
            QStringList parts = msg.split(" ");
            if (parts.size() == 2) {
                QString userIdStr = parts[1];
                userId = userIdStr.toInt();
                if(msg.contains("deny")) {
                    reply = 0;
                    responseString = serverCreateMessage->createDenyResponseJoinRoomMessage(userId, 0);
                }
                else if(msg.contains("accept")) {
                    reply = 1;
                    Room* room = this->serverCreateMessage->getRequestProcessing()->getRoom();
                    QList<User*> users = room->getUserAndPoint().keys();
                    qDebug() << "server core deny accept: " << users.size();
                    responseString = serverCreateMessage->createResponseJoinRoomMessage(userId, room->getRoomname(),  1, users);
                }
            } else {
                qDebug() << "Invalid string format";
            }
            qDebug() << responseString;
            connectionSet.value(userId)->write(responseString.toUtf8());
        }
        else if(msg.compare("get question")==0) {
            Room* room = this->serverCreateMessage->getRequestProcessing()->getRoom();
            QList<User*> users = room->getUserAndPoint().keys();
            for(User* user : users) {
                connectionSet.value(user->getId())->write(responseString.toUtf8());
            }
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


