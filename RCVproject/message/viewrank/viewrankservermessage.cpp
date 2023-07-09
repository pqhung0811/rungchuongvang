
#include "viewrankservermessage.h"

ViewRankServerMessage::ViewRankServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

ViewRankServerMessage::ViewRankServerMessage(QList<quint64> userIds, QList<QString> usernames, QList<quint64> ranked, QList<quint64> rankScore, QString status, QString errorMsg, QObject *parent)
    : ServerMessage{status, errorMsg, parent}
{
    this->addCommandCode(command->toCommand("VIEWRANK"));
    this->responseBody->createViewRankBody(userIds, usernames, ranked, rankScore);

    this->finalizeMessageObject();
}

