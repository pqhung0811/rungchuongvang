
#ifndef REQUESTPROCESSING_H
#define REQUESTPROCESSING_H


#include <QObject>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include "logincontroller.h"
#include "user.h"
#include "room.h"
#include "registercontroller.h"
#include "createroomcontroller.h"
#include "requestjoinroomcontroller.h"
#include "roomapi.h"
#include "answer.h"
#include "question.h"
#include <QDateTime>
#include "questionapi.h"
#include "userapi.h"
#include <QList>
#include "historyapi.h"
#include "history.h"
#include "QThread"
#include <QNetworkInterface>

class RequestProcessing : public QObject
{
    Q_OBJECT
private:
    QJsonObject message;
    User* user;
    Room* room;
    QString ouputMsg;
    QList<Room*> rooms;
    QList<User*> users;
    QList<QString> usernames;
    QList<quint64> scores;

public:
    explicit RequestProcessing(QObject *parent = nullptr);

    QJsonObject getMessage() const;
    void setMessage(const QJsonObject &newMessage);

    Room *getRoom() const;
    void setRoom(Room *newRoom);

    User *getUser() const;
    void setUser(User *newUser);

    QString getOuputMsg() const;
    void setOuputMsg(const QString &newOuputMsg);

    QList<Room *> getRooms() const;
    void setRooms(const QList<Room *> &newRooms);

    QList<User *> getUsers() const;
    void setUsers(const QList<User *> &newUsers);
    QString finishGame();

    QList<QString> getUsernames() const;
    void setUsernames(const QList<QString> &newUsernames);

    QList<quint64> getScores() const;
    void setScores(const QList<quint64> &newScores);

public slots:
    QString handle();
    QString login();
    QString logout();
    QString registers();
    QString createRoom();
    QList<Room*> findRoom();
    QString requestJoinRoom();
    QString responseJoinRoom();
    QList<User*> viewRank();
    QList<Question*> startGame();
    QList<History*> viewHistory();
    void updateUserAndPoints();
    void writeLog(const QString& message);
    void extractLogFile();

signals:
    void endGame();

};

#endif // REQUESTPROCESSING_H
