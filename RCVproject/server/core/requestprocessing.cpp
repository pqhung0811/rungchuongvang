
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

User *RequestProcessing::getUser() const
{
    return user;
}

void RequestProcessing::setUser(User *newUser)
{
    user = newUser;
}

QString RequestProcessing::getOuputMsg() const
{
    return ouputMsg;
}

void RequestProcessing::setOuputMsg(const QString &newOuputMsg)
{
    ouputMsg = newOuputMsg;
}

QList<Room *> RequestProcessing::getRooms() const
{
    return rooms;
}

void RequestProcessing::setRooms(const QList<Room *> &newRooms)
{
    rooms = newRooms;
}

QList<User *> RequestProcessing::getUsers() const
{
    return users;
}

void RequestProcessing::setUsers(const QList<User *> &newUsers)
{
    users = newUsers;
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
        if(command.compare("LOGIN")==0)  cmd=1;
        else if(command.compare("LOGOUT")==0) cmd=2;
        else if(command.compare("REGISTER")==0) cmd=3;
        else if(command.compare("CREATEROOM")==0) cmd=4;
        else if(command.compare("REQUESTJOINROOM")==0) cmd=5;
        else if(command.compare("RESPONSEJOINROOM")==0) cmd=6;
        else if(command.compare("FINDROOM")==0) cmd=7;
        else if(command.compare("VIEWRANK")==0) cmd=8;
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
            case 6:
                output = this->responseJoinRoom();
                break;
            case 7:
                this->rooms = this->findRoom();
                output = "find room";
                break;
            case 8:
                this->users = this->viewRank();
                output = "view rank";
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
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        // Lấy giá trị của key "username" từ QJsonObject "infoObject"
        if (infoObject.contains("username") && infoObject["username"].isString()) {
            username = infoObject["username"].toString();
        }
        if (infoObject.contains("password") && infoObject["password"].isString()) {
            password = infoObject["password"].toString();
        }
        LoginController* loginController = new LoginController();
        msg = loginController->checkLogin(username, password);
        if(msg.compare("login successfully")==0) {
            this->user = loginController->getUser();
        }
        qDebug() << "login: " << this->user->getId();
        return msg;
    }
}

QString RequestProcessing::logout() {
    if (this->message.contains("info") && this->message["info"].isString())
    {
//        QString infoString = this->message["info"].toString();
//        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();
        QJsonObject infoObject = this->message.value("info").toObject();

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
        CreateRoomController* createRoomController = new CreateRoomController();
        User* owner = new User();
        owner->setId(ownerId);
        owner->setUsername(username);
        owner->setRank(ranked);
        owner->setRankScore(rankScore);
//        createRoomController->setOwner(owner);
        qDebug() << "Owner: " << this->user->getUsername();
        createRoomController->setOwner(this->user);
        msg = createRoomController->createRoom(roomname);
        this->room = createRoomController->getRoom();
        qDebug() << "processing roomname: " << this->room->getRoomname();
        qDebug() << "processing owner: " << this->room->getOwner()->getId();
    }
    return msg;
}

QList<Room*> RequestProcessing::findRoom()
{
    RoomAPI* roomAPI = new RoomAPI();
    QList<Room*> roomss;
    if(roomss.empty()) {
        qDebug() << "empty";
    }
    roomss = roomAPI->getRoomsByStatusAndLevel(0, this->user->getRank());
    return roomss;
}

QString RequestProcessing::requestJoinRoom() {
    QString roomIdStr;
    QString msg;
    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        if (infoObject.contains("roomId") && infoObject["roomId"].isString()) {
            roomIdStr = infoObject["roomId"].toString();
        }
    }
    RequestJoinRoomController* requestJoinRoomController = new RequestJoinRoomController();
    msg = requestJoinRoomController->requestJoin() + " " + roomIdStr;
    return msg;
}

QString RequestProcessing::responseJoinRoom() {
    QString msg;
    quint64 userId;
    quint64 roomId;
    quint8 reply;
    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();
//        QJsonObject infoObject = this->message.value("info").toObject();

        if (infoObject.contains("userId") && infoObject["userId"].isString()) {
            QString userIdStr = infoObject["userId"].toString();
            userId = userIdStr.toInt();
        }
        if (infoObject.contains("roomId") && infoObject["roomId"].isString()) {
            QString roomIdStr = infoObject["roomId"].toString();
            roomId = roomIdStr.toInt();
        }
        if (infoObject.contains("reply") && infoObject["reply"].isString()) {
            QString replyStr = infoObject["reply"].toString();
            reply = replyStr.toInt();
        }
        RequestJoinRoomController* requestJoinRoomController = new RequestJoinRoomController();
        msg = requestJoinRoomController->responseJoin(userId, roomId, reply);
    }
    return msg;
}

QList<User *> RequestProcessing::viewRank()
{
    UserAPI* userAPI = new UserAPI();
    QList<User*> users;
    if(users.empty()) {
        qDebug() << "empty";
    }
    users = userAPI->getAllUsersOrderByRank();
    return users;
}

