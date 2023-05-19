
#ifndef QUESTIONCONTROLLER_H
#define QUESTIONCONTROLLER_H


#include <QObject>


class QuestionController : public QObject
{
    Q_OBJECT
public:
    explicit QuestionController(QObject *parent = nullptr);

signals:

};

#endif // QUESTIONCONTROLLER_H
