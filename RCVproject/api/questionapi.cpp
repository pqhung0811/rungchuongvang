
#include "questionapi.h"
#include "question.h"
#include "QtSql/QSqlDatabase"
#include <QSqlQuery>
#include "answerapi.h"

QuestionAPI::QuestionAPI(QObject *parent)
    : QObject{parent}
{

}

QList<Question*> QuestionAPI::getRandomSomeQuestion(quint64 n) {
    QList<Question*> listQuestion;
    QSqlQuery query;
    query.prepare("SELECT * FROM question ORDER BY RANDOM() LIMIT :n");
    query.bindValue(":n", n);
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        Question* question = new Question();
        quint64 id = query.value(0).toInt();
        QString content = query.value(1).toString();
        QString topic = query.value(2).toString();
        question->setId(id);
        question->setContent(content);
        question->setTopic(topic);
        AnswerAPI* answerAPI = new AnswerAPI();
        question->setListAnswer(answerAPI->getAnswerByQuestionId(id));
        listQuestion.append(question);
    }
    return listQuestion;
}

