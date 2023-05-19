
#ifndef ANSWER_H
#define ANSWER_H

#include <QObject>

class Answer : public QObject
{
private:
protected:
    quint64 id;
    QString content;
    quint64 result;

public:
    explicit Answer(QObject *parent = nullptr);

public:
    quint64 getId();
    QString getContent();
    quint64 getResult();
    void setId(quint64 id);
    void setContent(QString content);
    void setResult(quint64 result);

signals:

};

#endif // ANSWER_H
