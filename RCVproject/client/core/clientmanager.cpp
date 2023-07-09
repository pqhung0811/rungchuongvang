
#include "clientmanager.h"

ClientManager::ClientManager(QObject *parent)
    : QObject{parent}
{
    this->clientCore = ClientCore::getInstance();
    connect(clientCore, &ClientCore::Finished, this, &ClientManager::hanldeResponse);
}

ClientCore *ClientManager::getClientCore() const
{
    return clientCore;
}

void ClientManager::setClientCore(ClientCore *newClientCore)
{
    clientCore = newClientCore;
}

void ClientManager::login(QString username, QString password)
{
    this->clientCore->login(username, password);
}

void ClientManager::viewrank()
{
    this->clientCore->viewRank();
}

void ClientManager::createroom(QString roomname)
{
    this->clientCore->createRoom(roomname);
}

void ClientManager::findroom()
{
    this->clientCore->findRoom();
}

void ClientManager::hanldeResponse(const QJsonDocument &jsonDoc)
{
    this->jsonDoc = jsonDoc;
}

QJsonDocument ClientManager::getJsonDoc() const
{
    return jsonDoc;
}

void ClientManager::setJsonDoc(const QJsonDocument &newJsonDoc)
{
    jsonDoc = newJsonDoc;
}






