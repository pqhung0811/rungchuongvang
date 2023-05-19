
#ifndef ATTACHMENT_H
#define ATTACHMENT_H


#include <QObject>
#include <QVector>
#include <QtNetwork/QAbstractSocket>
#include <QtCore/QAtomicInt>

class Attachment : public QObject
{
    Q_OBJECT

private:
    QString sendMessage;
    QVector<QString> returnMessage;
    QAtomicInt active;
    QAbstractSocket* socket;
    quint64 attachmentID;

public:
    explicit Attachment(QObject *parent = nullptr);
    explicit Attachment(QString msg, QAtomicInt act, QObject *parent = nullptr);
    ~Attachment();

public slots:
    quint64 getAttachmentID();
    void setAttachmentID(int id);

    QString getSendMessage();

    QString getReturnMessage();
    void setReturnMessage(QString retMsg);

    QAtomicInt getActive();

    QAbstractSocket* getSocket();
    void setSocket(QAbstractSocket* sock);


signals:

};

#endif // ATTACHMENT_H
