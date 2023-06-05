
#ifndef RESPONSEBODY_H
#define RESPONSEBODY_H


#include <QObject>
#include <QJsonObject>

class ResponseBody : public QObject
{
    Q_OBJECT
private:
    QJsonObject responseBody;
public:
    explicit ResponseBody(QObject *parent = nullptr);

public slots:
    void setResponseBody(QJsonObject responseBody);
    QJsonObject getResponseBody();
    void createLoginBody(quint64 id, QString username, quint64 ranked, quint64 rankScore);
    void createLogoutBody(quint64 id, QString username);
signals:

};

#endif // RESPONSEBODY_H
