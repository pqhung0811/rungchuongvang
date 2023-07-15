
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

QList<QString> RequestProcessing::getUsernames() const
{
    return usernames;
}

void RequestProcessing::setUsernames(const QList<QString> &newUsernames)
{
    usernames = newUsernames;
}

QList<quint64> RequestProcessing::getScores() const
{
    return scores;
}

void RequestProcessing::setScores(const QList<quint64> &newScores)
{
    scores = newScores;
}

RequestProcessing::RequestProcessing(QObject *parent)
    : QObject{parent}
{
//    connect(this, &RequestProcessing::endGame, this, &RequestProcessing::updateUserAdnPoints);
}

QString RequestProcessing::handle() {
    quint64 cmd = 0;
    QString output;
    if (this->message.contains("command_code") && this->message["command_code"].isString()) {
        QString command = this->message["command_code"].toString();
        if(command.compare("LOGIN")==0)  cmd=1;
        else if(command.compare("VIEWHISTORY")==0) cmd=2;
        else if(command.compare("REGISTER")==0) cmd=3;
        else if(command.compare("CREATEROOM")==0) cmd=4;
        else if(command.compare("REQUESTJOINROOM")==0) cmd=5;
        else if(command.compare("RESPONSEJOINROOM")==0) cmd=6;
        else if(command.compare("FINDROOM")==0) cmd=7;
        else if(command.compare("VIEWRANK")==0) cmd=8;
        else if(command.compare("STARTGAME")==0) cmd=9;
        else if(command.compare("FINISHGAME")==0) cmd=10;
        switch (cmd) {
            case 1:
                output = this->login();
                break;
            case 2:
                this->user->setHistory(this->viewHistory());
                output = "view history";
                break;
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
                break;
            case 9:
                this->room->setListQuestions(this->startGame());
                output = "get question";
                break;
            case 10:
                return this->finishGame();
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
    QString msg;
    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        // Lấy giá trị của key "username" từ QJsonObject "infoObject"
        if (infoObject.contains("roomname") && infoObject["roomname"].isString()) {
            roomname = infoObject["roomname"].toString();
        }
        CreateRoomController* createRoomController = new CreateRoomController();
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
    RoomAPI* roomAPI = new RoomAPI();
    quint64 ownerId;
    QString msg;
    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        if (infoObject.contains("roomId") && infoObject["roomId"].isString()) {
            roomIdStr = infoObject["roomId"].toString();
            ownerId = roomAPI->getOwnerIdByRoomId(roomIdStr.toInt());
        }
    }
//    RequestJoinRoomController* requestJoinRoomController = new RequestJoinRoomController();
    msg = "requestjoin " + QString::number(ownerId);
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

        if (infoObject.contains("userId") && infoObject["userId"].isString()) {
            QString userIdStr = infoObject["userId"].toString();
            userId = userIdStr.toInt();
        }
        if (infoObject.contains("reply") && infoObject["reply"].isString()) {
            QString replyStr = infoObject["reply"].toString();
            reply = replyStr.toInt();
        }
        roomId = this->room->getId();

        RequestJoinRoomController* requestJoinRoomController = new RequestJoinRoomController();
        msg = requestJoinRoomController->responseJoin(userId, roomId, reply);
        if(msg.contains("accept")) {
            this->room->updateUser(requestJoinRoomController->getUser(), 0);
        }
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
    delete userAPI;
    return users;
}

QList<Question*> RequestProcessing::startGame()
{
    quint64 noQuestion;
    QList<Question*> listQuestion;
    QuestionAPI* questionAPI = new QuestionAPI();
    RoomAPI* roomAPI = new RoomAPI;

    this->room->setStatus(1);
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentDateTimeString = currentDateTime.toString("dd/MM/yyyy hh:mm:ss");
    this->room->setStartTime(currentDateTimeString);

    if(this->user->getId()==this->room->getOwner()->getId()) {
        roomAPI->updateStatusAndStarttime(this->room->getId(), 1, currentDateTimeString);
    }

    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        if (infoObject.contains("noQuestion") && infoObject["noQuestion"].isString()) {
            QString noQuestionStr = infoObject["noQuestion"].toString();
            noQuestion = noQuestionStr.toInt();
        }
    }
    listQuestion = questionAPI->getRandomSomeQuestion(noQuestion);

    delete questionAPI;
    delete roomAPI;

    return listQuestion;
}

QList<History *> RequestProcessing::viewHistory()
{
    HistoryAPI* histopyAPI = new HistoryAPI();
    QList<History*> listHistory;
    listHistory = histopyAPI->getHistoryByUserId(this->user->getId());

    delete histopyAPI;
    return listHistory;
}

void RequestProcessing::updateUserAndPoints()
{
    HistoryAPI* histopyAPI = new HistoryAPI();
    UserAPI* userAPI = new UserAPI();
    QMap<User*, quint64> nameAndScore = this->room->getUserAndPoint();

    for (auto it = nameAndScore.begin(); it != nameAndScore.end(); it++) {
        nameAndScore.insert(it.key(), histopyAPI->getScoreByUserId(it.key()->getId()));
    }

    for (auto it = nameAndScore.begin(); it != nameAndScore.end(); ++it) {
        usernames.append(it.key()->getUsername());
        scores.append(it.value());
    }

    QList<QPair<QString, quint64>> sortedData;
    for (int i = 0; i < scores.size(); ++i) {
        sortedData.append(qMakePair(usernames[i], scores[i]));
    }

    std::sort(sortedData.begin(), sortedData.end(),
              [](const QPair<QString, quint64>& pair1, const QPair<QString, quint64>& pair2) {
                  return pair1.second > pair2.second;
              });

    usernames.clear();
    scores.clear();

    for (const auto& pair : sortedData) {
        usernames.append(pair.first);
        scores.append(pair.second);
    }

    if(this->usernames.indexOf(this->user->getUsername())==0 || this->usernames.indexOf(this->user->getUsername())==1) {
        quint64 rankscore = this->user->getRankScore()+5;
        quint64 rank;
        if(rankscore<100) rank=0;
        else if(rankscore>=100 && rankscore<500) rank=1;
        else if(rankscore>=500) rank=2;
        userAPI->updateRankscoreAndRanked(rankscore, rank, this->user->getId());
    }

    this->extractLogFile();

    delete histopyAPI;
    delete userAPI;
    qDebug() << "\n\nrequest process: " << this->usernames;
}

void RequestProcessing::extractLogFile()
{
    QList<Question*> questions = this->room->getListQuestions();
    QString content;
    content = "Id: " + QString::number(this->room->getId()) +
              "\nRoom Name: " + this->room->getRoomname() +
              "\nStart Time: " + this->room->getStartTime() +
              "\nEnd Time: " + this->room->getEndTime() +
              "\n\nUsername    score    top\n";

    for(int i=0; i<this->usernames.size(); i++) {
        content = content + this->usernames.at(i) + "    " + QString::number(this->scores.at(i)) + "    " + QString::number(i+1) + "\n";
    }

    content = content + "\nQuestion and True Answer\n";
    for(int i=0; i<questions.size(); i++) {
        Question* question = questions.at(i);
        content = content + question->getContent() + "   ";
        for(int j=0; j<question->getListAnswer().size(); j++) {
            Answer* answer = question->getListAnswer().at(j);
            if(answer->getResult()==1) {
                content = content + answer->getContent() + "\n";
            }
        }
    }

    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();

    // Lặp qua danh sách các địa chỉ IP và tìm địa chỉ IP công cộng
    for (const QHostAddress &ipAddress : ipAddressesList)
    {
        if (ipAddress != QHostAddress::LocalHost && ipAddress.toIPv4Address())
        {
            content = content + "\nIP: " + ipAddress.toString();
        }
    }

    this->writeLog(content);
}

QString RequestProcessing::finishGame()
{
    quint64 score;
    RoomAPI* roomAPI = new RoomAPI;
    HistoryAPI* histopyAPI = new HistoryAPI();

    qDebug() << "request finish 1";

    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        if (infoObject.contains("score") && infoObject["score"].isString()) {
            QString scoreStr = infoObject["score"].toString();
            score = scoreStr.toInt();
        }
    }

    qDebug() << "request finish 2" << score;

    this->room->setStatus(2);
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentDateTimeString = currentDateTime.toString("dd/MM/yyyy hh:mm:ss");
    this->room->setEndTime(currentDateTimeString);

    if(this->user->getId()==this->room->getOwner()->getId()) {
        roomAPI->updateStatusAndEndtime(this->room->getId(), 2, currentDateTimeString);
    }

    this->room->getUserAndPoint().insert(this->user, score);

    histopyAPI->updateHistory(this->user->getId(), score, this->room->getStartTime(), this->room->getEndTime());

//    QThread::msleep(2000);

    updateUserAndPoints();

    return "finish";
}

void RequestProcessing::writeLog(const QString& message)
{
    QString basePath = "D:/Networkprogramming/project";

    // Tạo tên file dựa trên thời gian hiện tại
    QString fileName = QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss") + ".log";

    // Kết hợp đường dẫn thư mục gốc với tên file
    QString filePath = QDir(basePath).filePath(fileName);

    // Mở file log để ghi
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);

        // Ghi thông tin log
        stream << message << "\n";

        // Đóng file
        file.close();
    }
}
