
#include "clientcore.h"

ClientCore::ClientCore(QObject *parent)
    : QObject{parent}
{
    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::connected, this, &ClientCore::onConnected);
    connect(socket, &QTcpSocket::readyRead, this, &ClientCore::onReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &ClientCore::onDisconnected);
}

void ClientCore::connectToServer(const QString &host, quint16 port)
{
    socket->connectToHost(host, port);
}

void onConnected()
{
    qDebug() << "Connected to server!";
}

void onReadyRead()
{
    QByteArray responseData = m_socket->readAll();
    // Process the responseData received from the server
}

void onDisconnected()
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
    QString inputMessage;
    quint64 input;
    while (inputMessage.compare("login") == 0) {
        if(inputMessage.compare("login") == 0) input=1;
        switch (input) {
            case 1: {
                login("hikaru", "123456");
                break;
            }
            default: {
                qDebug() << "unknown command";
            }
        }
    }
}

void ClientCore::sendRequest(QString strMsgToSend) {
    Attachment* attachment = new Attachment(strMsgToSend, 1);
    QByteArray data = strMsgToSend.toUtf8();
    QBuffer* buffer = new QBuffer(this);
    buffer->setData(data);
    buffer->open(QIODevice::ReadWrite);
    socket->write(buffer->data());
}

void ClientCore::login(QString username, QString password) {
    LoginClientMessage* clientMsg = new LoginClientMessage(username, password);
    sendRequest(clientMsg->toString());
}
