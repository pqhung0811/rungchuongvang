
#include "clientcore.h"

QString ClientCore::getInputMessage() const
{
    return inputMessage;
}

void ClientCore::setInputMessage(const QString &newInputMessage)
{
    inputMessage = newInputMessage;
}

QString ClientCore::getOutputMessage() const
{
    return outputMessage;
}

void ClientCore::setOutputMessage(const QString &newOutputMessage)
{
    outputMessage = newOutputMessage;
}

ClientCore::ClientCore(QObject *parent)
    : QObject{parent}
{
    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::connected, this, &ClientCore::onConnected);
    connect(socket, &QTcpSocket::readyRead, this, &ClientCore::onReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &ClientCore::onDisconnected);
}

ClientCore *ClientCore::getInstance()
{
    static ClientCore instance;
    return &instance;
}

void ClientCore::connectToServer(const QString &host, quint16 port)
{
    socket->connectToHost(host, port);
}

void ClientCore::onConnected()
{
    qDebug() << "Connected to server!";
}

void ClientCore::onReadyRead()
{
    QByteArray responseData = this->socket->readAll();
    // Process the responseData received from the server
    QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);

    emit Finished(jsonDoc);
//    emit Finished(QString::fromUtf8(responseData));
//    this->outputMessage = QString::fromUtf8(responseData);
}

void ClientCore::onDisconnected()
{
    qDebug() << "Disconnected from server!";
}


void ClientCore::start() {
    socket->connectToHost(QHostAddress::LocalHost,8080);
    if(socket->waitForConnected())
        qDebug() << "Connect to server";
    else{
        qDebug() << QString("The following error occurred: %1.").arg(socket->errorString());
        exit(EXIT_FAILURE);
    }
}

void ClientCore::sendRequest(QString strMsgToSend) {
//    Attachment* attachment = new Attachment(strMsgToSend, 1);
    QByteArray data = strMsgToSend.toUtf8();
    QBuffer* buffer = new QBuffer(this);
    buffer->setData(data);
    buffer->open(QIODevice::ReadWrite);
    socket->write(buffer->data());
    socket->waitForBytesWritten();
}

void ClientCore::login(QString username, QString password) {
    LoginClientMessage* clientMsg = new LoginClientMessage(username, password);
    sendRequest(clientMsg->toString());
}

void ClientCore::logout(quint64 id, QString username) {
    LogoutClientMessage* clientMsg = new LogoutClientMessage(id, username);
    sendRequest((clientMsg->toString()));
}

void ClientCore::registers(QString username, QString password) {
    RegisterClientMessage* clientMsg = new RegisterClientMessage(username, password);
    sendRequest(clientMsg->toString());
}

void ClientCore::createRoom(QString roomname, quint64 ownerId, QString username, quint64 ranked, quint64 rankScore) {
    CreateRoomClientMessage* clientMsg = new CreateRoomClientMessage(roomname, ownerId, username, ranked, rankScore);
    sendRequest(clientMsg->toString());
}

void ClientCore::requestJoinRoom(quint64 userId, quint64 roomId) {
    RequestJoinRoomClientMessage* clientMsg = new RequestJoinRoomClientMessage(userId, roomId);
    sendRequest(clientMsg->toString());
}

void ClientCore::responseJoinRoom(quint64 userId, quint64 roomId, quint8 reply) {
    ResponseJoinRoomClientMessage* clientMsg = new ResponseJoinRoomClientMessage(userId, roomId, reply);
    sendRequest(clientMsg->toString());
}
