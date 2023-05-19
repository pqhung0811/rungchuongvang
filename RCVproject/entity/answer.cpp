
#include "answer.h"

Answer::Answer(QObject *parent)
    : QObject{parent}
{

}

quint64 Answer::getId() {
    return this->id;
}

QString Answer::getContent() {
    return this->content;
}

quint64 Answer::getResult() {
    return this->result;
}

void Answer::setId(quint64 id) {
    this->id = id;
}

void Answer::setContent(QString content) {
    this->content = content;
}

void Answer::setResult(quint64 result) {
    this->result = result;
}
