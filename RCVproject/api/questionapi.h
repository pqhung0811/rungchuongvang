
#ifndef QUESTIONAPI_H
#define QUESTIONAPI_H


#include <QObject>
#include "question.h"

class QuestionAPI : public QObject
{
    Q_OBJECT
public:
    explicit QuestionAPI(QObject *parent = nullptr);

public slots:
    QList<Question*> getRandomSomeQuestion(quint64 n);

signals:

};

#endif // QUESTIONAPI_H
