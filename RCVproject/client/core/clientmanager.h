
#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H

#include <QObject>
#include <QJsonDocument>
#include "clientcore.h"


class ClientManager : public QObject
{
    Q_OBJECT

public:
    explicit ClientManager(QObject *parent = nullptr);

    ClientCore *getClientCore() const;
    void setClientCore(ClientCore *newClientCore);

    QJsonDocument getJsonDoc() const;
    void setJsonDoc(const QJsonDocument &newJsonDoc);

public slots:
    void login(QString username, QString password);
    void viewrank();
    void createroom(QString roomname);
    void findroom();
    void hanldeResponse(const QJsonDocument& jsonDoc);


private:
    ClientCore* clientCore;
    QJsonDocument jsonDoc;

};

#endif // CLIENTMANAGER_H
