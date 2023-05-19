
#include "answerapi.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

AnswerAPI::AnswerAPI(QObject *parent)
    : QObject{parent}
{

}

QList<Answer*> AnswerAPI::getAnswerByQuestionId(quint64 questionId) {
    QList<Answer*> listAnswer;
    QSqlQuery query;
    query.prepare("SELECT * FROM answer WHERE question_id = :questionId");
    query.bindValue(":questionId", questionId);
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        Answer* answer = new Answer();
        quint64 id = query.value(0).toInt();
        QString content = query.value(1).toString();
        quint64 result = query.value(2).toInt();
        answer->setId(id);
        answer->setContent(content);
        answer->setResult(result);
        listAnswer.append(answer);
    }
    return listAnswer;
}

