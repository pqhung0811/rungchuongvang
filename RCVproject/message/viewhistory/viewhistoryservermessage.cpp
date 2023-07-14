
#include "viewhistoryservermessage.h"

ViewHistoryServerMessage::ViewHistoryServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

ViewHistoryServerMessage::ViewHistoryServerMessage(QList<quint64> tops, QList<quint64> scores, QList<QString> startgames,
                                                   QList<QString> endgames, QString status, QString errorMsg, QObject *parent)
    : ServerMessage(status, errorMsg, parent)
{
    this->addCommandCode(this->command->toCommand("VIEWHISTORY"));
    this->responseBody->createViewHistoryBody(tops, scores, startgames, endgames);
    this->finalizeMessageObject();
}

