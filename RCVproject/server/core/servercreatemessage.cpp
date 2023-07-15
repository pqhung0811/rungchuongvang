
#include "servercreatemessage.h"

RequestProcessing *ServerCreateMessage::getRequestProcessing() const
{
    return requestProcessing;
}

void ServerCreateMessage::setRequestProcessing(RequestProcessing *newRequestProcessing)
{
    requestProcessing = newRequestProcessing;
}

ServerCreateMessage::ServerCreateMessage(QObject *parent)
    : QObject{parent}
{
    this->requestProcessing = new RequestProcessing();
}

QString ServerCreateMessage::createMessage(QString msg)
{
    if(msg.compare("login successfully")==0) {
        LoginServerMessage* serverMsg = new LoginServerMessage(this->requestProcessing->getUser()->getId(),
                                                               this->requestProcessing->getUser()->getUsername(),
                                                               this->requestProcessing->getUser()->getRank(),
                                                               this->requestProcessing->getUser()->getRankScore(),
                                                               "success", " ");
        return serverMsg->toString();
    }
    else if(msg.compare("invalid username")==0) {
        NoInfoMessage* serverMsg = new NoInfoMessage("error", "invalid username", "LOGIN");
        return serverMsg->toString();
    }
    else if(msg.compare("invalid password")==0) {
        NoInfoMessage* serverMsg = new NoInfoMessage("error", "invalid password", "LOGIN");
        return serverMsg->toString();
    }
    else if(msg.compare("username exist")==0) {
        NoInfoMessage* serverMsg = new NoInfoMessage("error", "username exist", "REGISTER");
        return serverMsg->toString();
    }
    else if(msg.compare("register successfully")==0) {
        NoInfoMessage* serverMsg = new NoInfoMessage("success", "register successfully", "REGISTER");
        return serverMsg->toString();
    }
    else if(msg.compare("find room")==0) {
        QList<quint64> roomIds;
        QList<QString> roomnames;
        for(int i=0; i < this->requestProcessing->getRooms().size(); i++) {
            Room* room = this->requestProcessing->getRooms().at(i);
            roomIds.append(room->getId());
            roomnames.append(room->getRoomname());
        }
        FindRoomServerMessage* serverMsg = new FindRoomServerMessage(roomIds, roomnames, "success", " ");
        return serverMsg->toString();
    }
    else if(msg.compare("create room successfully")==0) {
        NoInfoMessage* serverMsg = new NoInfoMessage("success", "create room successfully", "CREATEROOM");
        return serverMsg->toString();
    }
    else if(msg.compare("view rank")==0) {
        QList<quint64> userIds;
        QList<QString> usernames;
        QList<quint64> ranked;
        QList<quint64> rankScore;
        for(int i=0; i < this->requestProcessing->getUsers().size(); i++) {
            User* user = this->requestProcessing->getUsers().at(i);
            userIds.append(user->getId());
            usernames.append(user->getUsername());
            ranked.append(user->getRank());
            rankScore.append(user->getRankScore());
        }
        ViewRankServerMessage* serverMsg = new ViewRankServerMessage(userIds, usernames, ranked, rankScore, "success", " ");
        return serverMsg->toString();
    }
    else if(msg.compare("get question")==0) {
        StartGameServerMessage* serverMsg = new StartGameServerMessage(this->requestProcessing->getRoom()->getListQuestions(), "success", " ");
        return serverMsg->toString();
    }
    else if(msg.compare("view history")==0) {
        QList<quint64> tops;
        QList<quint64> scores;
        QList<QString> startgames;
        QList<QString> endgames;
        for(History* history : this->requestProcessing->getUser()->getHistory()) {
            tops.append(history->getTop());
            scores.append(history->getScore());
            startgames.append(history->getStartgame());
            endgames.append(history->getEndgame());
        }
        ViewHistoryServerMessage* serverMsg = new ViewHistoryServerMessage(tops, scores, startgames, endgames, "success", " ");
        return serverMsg->toString();
    }
    else if(msg.compare("finish")==0) {
        CheckFinishServerMessage* serverMsg = new CheckFinishServerMessage(this->requestProcessing->getUsernames(), this->requestProcessing->getScores(), "success", " ");
        return serverMsg->toString();
    }
    else if(msg.contains("requestjoin")) {
        RequestJoinRoomServerMessage* serverMsg = new RequestJoinRoomServerMessage(this->requestProcessing->getUser()->getId(), this->requestProcessing->getUser()->getUsername(), this->requestProcessing->getUser()->getRankScore(), "success", " ");
        return serverMsg->toString();
    }
}

QString ServerCreateMessage::createDenyResponseJoinRoomMessage(quint64 userId, quint8 reply)
{
    ResponseJoinRoomServerMessage* serverMsg = new ResponseJoinRoomServerMessage(userId, reply, "success", " ");
    return serverMsg->toString();
}

QString ServerCreateMessage::createResponseJoinRoomMessage(quint64 userId, QString roomname, quint8 reply, QList<User*> users)
{
    ResponseJoinRoomServerMessage* serverMsg = new ResponseJoinRoomServerMessage(userId, roomname, reply, users, "success", " ");
    return serverMsg->toString();
}


