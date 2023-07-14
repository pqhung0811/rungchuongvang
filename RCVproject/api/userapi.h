
#ifndef USERAPI_H
#define USERAPI_H


#include <QObject>
#include "user.h"

class UserAPI : public QObject
{
    Q_OBJECT
public:
    explicit UserAPI(QObject *parent = nullptr);

public slots:
    QList<User*> getAllUsers();
    User* getUserByNameAndPass(QString name, QString pass);
    void addUser(QString name, QString pass);
    QList<QString> getAllUsernames();
    User* getUserbyId(quint64 id);
    User* getUserbyUsername(QString name);
    void updateRankscoreAndRanked(quint64 rankscore, quint64 rank, quint64 id);
    void updateRoomId(quint64 roomId, quint64 id);
    QList<User*> getAllUsersOrderByRank();
    QList<User*> getUsersByRoomId(quint64 roomId);

signals:

};

#endif // USERAPI_H
