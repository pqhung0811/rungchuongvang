
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
        qDebug() << "concac";
        for(int i=0; i < this->requestProcessing->getRooms().size(); i++) {
            Room* room = this->requestProcessing->getRooms().at(i);
            roomIds.append(room->getId());
            qDebug() << "concac1: " << room->getId();
            roomnames.append(room->getRoomname());
        }
        FindRoomServerMessage* serverMsg = new FindRoomServerMessage(roomIds, roomnames, "success", " ");
        return serverMsg->toString();
    }
}

