
#include "requestprocessing.h"

QJsonObject RequestProcessing::getMessage() const
{
    return message;
}

void RequestProcessing::setMessage(const QJsonObject &newMessage)
{
    message = newMessage;
}

Room *RequestProcessing::getRoom() const
{
    return room;
}

void RequestProcessing::setRoom(Room *newRoom)
{
    room = newRoom;
}

RequestProcessing::RequestProcessing(QObject *parent)
    : QObject{parent}
{

}

QString RequestProcessing::handle() {
    quint64 cmd = 0;
    QString output;
    if (this->message.contains("command_code") && this->message["command_code"].isString()) {
        QString command = this->message["command_code"].toString();
        qDebug() << "command in processing: " << command;
        if(command.compare("LOGIN")==0)  cmd=1;
        else if(command.compare("LOGOUT")==0) cmd=2;
        else if(command.compare("REGISTER")==0) cmd=3;
        else if(command.compare("CREATEROOM")==0) cmd=4;
        else if(command.compare("REQUESTJOINROOM")==0) cmd=5;
        qDebug() << "cmd: " << cmd;
        switch (cmd) {
            case 1:
                output = this->login();
                break;
//            case 2:
//                output = this
            case 3:
                output = this->registers();
                break;
            case 4:
                output = this->createRoom();
                break;
            case 5:
                output = this->requestJoinRoom();
                break;
            default:
                break;
        }
    }
    return output;
}

QString RequestProcessing::login() {
    // Lấy giá trị của key "info" từ QJsonObject
    QString username;
    QString password;
    QString msg;
    if (this->message.contains("info") && this->message["info"].isString()) {
        QString infoString = this->message["info"].toString();

        // Chuyển đổi chuỗi "info" thành QJsonObject
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        // Lấy giá trị của key "username" từ QJsonObject "infoObject"
        if (infoObject.contains("username") && infoObject["username"].isString()) {
            username = infoObject["username"].toString();
        }
        if (infoObject.contains("password") && infoObject["password"].isString()) {
            password = infoObject["password"].toString();
        }
        qDebug() << "username and pass processing: " << username << password;
        LoginController* loginController = new LoginController();
        msg = loginController->checkLogin(username, password);
        if(msg.compare("login successfully")==0) {
            this->user = loginController->getUser();
        }
        return msg;
    }
}

QString RequestProcessing::logout() {
    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();

        // Chuyển đổi chuỗi "info" thành QJsonObject
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        if (infoObject.contains("id") && infoObject["id"].isString()) {
            QString idStr = infoObject["id"].toString();
            quint64 id = idStr.toLongLong();
        }
        if (infoObject.contains("username") && infoObject["username"].isString()) {
            QString username = infoObject["username"].toString();
        }
    }
}

QString RequestProcessing::registers() {
    QString username;
    QString password;
    QString msg;
    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();

        // Chuyển đổi chuỗi "info" thành QJsonObject
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();
        // Lấy giá trị của key "username" từ QJsonObject "infoObject"
        if (infoObject.contains("username") && infoObject["username"].isString()) {
            username = infoObject["username"].toString();
        }
        if (infoObject.contains("password") && infoObject["password"].isString()) {
            password = infoObject["password"].toString();
        }
        RegisterController* registerController = new RegisterController();
        msg = registerController->createRgister(username, password);
        return msg;
    }
}

QString RequestProcessing::createRoom() {
    QString roomname;
    QString username;
    quint64 ownerId;
    quint64 ranked;
    quint64 rankScore;
    QString msg;
    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();

        // Chuyển đổi chuỗi "info" thành QJsonObject
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();
        // Lấy giá trị của key "username" từ QJsonObject "infoObject"
        if (infoObject.contains("roomname") && infoObject["roomname"].isString()) {
            roomname = infoObject["roomname"].toString();
        }
        if (infoObject.contains("username") && infoObject["username"].isString()) {
            username = infoObject["username"].toString();
        }
        if (infoObject.contains("ownerId") && infoObject["ownerId"].isString()) {
            QString ownerIdStr = infoObject["ownerId"].toString();
            ownerId = ownerIdStr.toInt();
        }
        if (infoObject.contains("ranked") && infoObject["ranked"].isString()) {
            QString rankedStr = infoObject["ranked"].toString();
            ranked = rankedStr.toInt();
        }
        if (infoObject.contains("rankScore") && infoObject["rankScore"].isString()) {
            QString rankScoreStr = infoObject["rankScore"].toString();
            rankScore = rankScoreStr.toInt();
        }
        qDebug() << "processing owner: " << ownerId;
        qDebug() << "processing ranked: " << ranked;
        qDebug() << "processing rankScore: " << rankScore;
        CreateRoomController* createRoomController = new CreateRoomController();
        User* owner = new User();
        owner->setId(ownerId);
        owner->setUsername(username);
        owner->setRank(ranked);
        owner->setRankScore(rankScore);
        createRoomController->setOwner(owner);
        msg = createRoomController->createRoom(roomname);
        this->room = createRoomController->getRoom();
        qDebug() << "processing roomname: " << this->room->getRoomname();
        qDebug() << "processing owner: " << this->room->getOwner()->getId();
    }
    return msg;
}

QString RequestProcessing::requestJoinRoom() {
    quint64 userId;
    quint64 roomId;
    QString msg;
    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();

        // Chuyển đổi chuỗi "info" thành QJsonObject
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        // Lấy giá trị của key "userId" từ QJsonObject "infoObject"
        if (infoObject.contains("userId") && infoObject["userId"].isString()) {
            QString userIdStr = infoObject["userId"].toString();
            userId = userIdStr.toInt();
        }
        if (infoObject.contains("roomId") && infoObject["roomId"].isString()) {
            QString roomIdStr = infoObject["roomId"].toString();
            roomId = roomIdStr.toInt();
        }
    }
    return msg;
}
