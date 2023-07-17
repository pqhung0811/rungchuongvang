
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
//    this->serverCreateMessage = new ServerCreateMessage();
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

    ServerCreateMessage* serverCreateMessage = new ServerCreateMessage();
    this->serverCreateMessageManager.insert(clientSocket, serverCreateMessage);

    // Handle the new client connection asynchronously
    connect(clientSocket, &QTcpSocket::readyRead, this, &ServerCore::onReadyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &ServerCore::onDisconnected);

    // Add the client socket to a list or data structure for managing multiple clients
//    this->connectionSet.append(clientSocket);

    qDebug() << "New client connected!";
}

void ServerCore::onReadyRead() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    ServerCreateMessage* serverCreateMessage = this->serverCreateMessageManager.value(clientSocket);
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
            qDebug() << "server core owner: " << ownerId;
            qDebug() << "server core keys: " << connectionSet.keys();
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
                    Room* room = serverCreateMessage->getRequestProcessing()->getRoom();
                    QList<User*> users = room->getUserAndPoint().keys();
                    qDebug() << "server core deny accept: " << users.size();
                    qDebug() << "accerp server core0: " << userId;
                    qDebug() << "accerp server core rname" << room->getRoomname();
                    for(User* user: users) {
                        qDebug() << "sererverr core: " << user->getUsername();
                        qDebug() << "sererverr cores: " << user->getRankScore();
                    }
                    responseString = serverCreateMessage->createResponseJoinRoomMessage(userId, room->getRoomname(),  1, users);

                    qDebug() << "accerp server core" << userId;
                    qDebug() << "accerp server core rname" << userId;
                    User* user = serverCreateMessage->getRequestProcessing()->getUserByUserId(userId);
                    QString responseStrings = serverCreateMessage->createAcceptResponseJoinRoomMessage(user->getUsername(), user->getRankScore());
                    this->serverCreateMessageManager.value(connectionSet.value(userId))->getRequestProcessing()->setRoom(serverCreateMessage->getRequestProcessing()->getRoom());
                    for(User* user : users) {
                        if(user->getId()==userId) {
                            connectionSet.value(userId)->write(responseString.toUtf8());
                        }
                        else if(user->getId()==room->getOwner()->getId()) {
                            continue;
                        }
                        else {
                            connectionSet.value(user->getId())->write(responseStrings.toUtf8());
                        }
                    }
                }
            } else {
                qDebug() << "Invalid string format";
            }
//            this->serverCreateMessageManager.value(connectionSet.value(userId))->getRequestProcessing()->setRoom(serverCreateMessage->getRequestProcessing()->getRoom());
        }

        else if(msg.compare("get question")==0) {
            Room* room = serverCreateMessage->getRequestProcessing()->getRoom();
            QList<User*> users = room->getUserAndPoint().keys();
            for(User* user : users) {
                connectionSet.value(user->getId())->write(responseString.toUtf8());
            }
        }

        else if(msg.compare("afk")==0) {
            Room* room = serverCreateMessage->getRequestProcessing()->getRoom();
            QList<User*> users = room->getUserAndPoint().keys();
            for(User* user : users) {
                this->serverCreateMessageManager.value(connectionSet.value(user->getId()))->getRequestProcessing()->removeUser(serverCreateMessage->getRequestProcessing()->getUser());
            }
            serverCreateMessage->getRequestProcessing()->afkGame();
//            clientSocket->write(responseString.toUtf8());
        }

        else {
            if(msg.compare("finish")==0) {
                QList<User*> users = serverCreateMessage->getRequestProcessing()->getRoom()->getUserAndPoint().keys();
                QString content = serverCreateMessage->getRequestProcessing()->extractLogFile();
                for(User* user : users) {
                    QTcpSocket* tcpSocket = connectionSet.value(user->getId());
                    // Lấy địa chỉ IP từ QTcpSocket
                    QHostAddress ipAddress = tcpSocket->peerAddress();
                    // Chuyển địa chỉ IP thành chuỗi
                    QString ipString = ipAddress.toString();
                    content = content + ipString + "\n";
                }
                serverCreateMessage->getRequestProcessing()->writeLog(content);
                serverCreateMessage->getRequestProcessing()->setRoom(nullptr);
            }

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


