
#include "question.h"

Question::Question(QObject *parent)
    : QObject{parent}
{

}

quint64 Question::getId() {
    return this->id;
}

QString Question::getTopic() {
    return this->topic;
}

QString Question::getContent() {
    return this->content;
}

QList<Answer*> Question::getListAnswer() {
    return this->listAnswer;
}

void Question::setId(quint64 id) {
    this->id = id;
}

void Question::setTopic(QString topic) {
    this->topic = topic;
}

void Question::setContent(QString content) {
    this->content = content;
}

void Question::setListAnswer(QList<Answer *> listAnswer) {
    this->listAnswer = listAnswer;
}
