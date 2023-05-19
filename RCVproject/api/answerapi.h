
#ifndef ANSWERAPI_H
#define ANSWERAPI_H


#include <QObject>
#include "answer.h"

class AnswerAPI : public QObject
{
    Q_OBJECT
public:
    explicit AnswerAPI(QObject *parent = nullptr);

public slots:
    QList<Answer*> getAnswerByQuestionId(quint64 questionId);

signals:

};

#endif // ANSWERAPI_H
