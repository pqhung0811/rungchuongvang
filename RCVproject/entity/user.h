#ifndef USER_H
#define USER_H

#include <QObject>

class User : public QObject
{
    Q_OBJECT

private:

protected:
    quint64 id;
    QString username;
    QString password;
    quint64 rankScore;
    quint64 rank;

public:
    explicit User(QObject *parent = nullptr);

public slots:
    quint64 getId();
    QString getUsername();
    QString getPassword();
    quint64 getRankScore();
    quint64 getRank();
    void setId(quint64 id);
    void setUsername(QString username);
    void setPassword(QString password);
    void setRankScore(quint64 rankScore);
    void setRank(quint64 rank);

signals:
};

#endif // USER_H
