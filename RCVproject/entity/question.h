
#ifndef QUESTION_H
#define QUESTION_H

#include <QObject>
#include <answer.h>

class Question : public QObject
{
private:
    quint64 id;
    QString topic;
    QString content;
    QList<Answer*> listAnswer;

public:
    explicit Question(QObject *parent = nullptr);

public slots:
    quint64 getId();
    QString getTopic();
    QString getContent();
    QList<Answer*> getListAnswer();
    void setId(quint64 id);
    void setTopic(QString topic);
    void setContent(QString content);
    void setListAnswer(QList<Answer*> listAnswer);

signals:

};

#endif // QUESTION_H
