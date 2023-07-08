
#include "command.h"

Command::Command(QObject *parent)
    : QObject{parent}
{

}

Command::Command(QString cmd,/* Priority priority,*/ QObject *parent) : QObject{parent}
{
    this->command = cmd;
//    this->priority = priority;
}

QString Command::getCommandString() {
    return this->command;
}

//Command::Priority Command::getCommandPriority() {
//    return this->priority;
//}

//quint64 Command::comparePriority(Command* anotherCommand) {
//    if (priority > anotherCommand->getCommandPriority()) {
//        return -1;
//    } else if (priority == anotherCommand->getCommandPriority()) {
//        return 0;
//    }
//    return 1;
//}

Command* Command::toCommand(QString input){
    QMap<QString, Command*> commands; /*= {
        {"LOGIN", Command("LOGIN", Priority::NORMAL)}
    };*/
    commands.insert("LOGIN", new Command("LOGIN" /*, Command::NORMAL, 0*/));
    commands.insert("LOGOUT", new Command("LOGOUT"));
    commands.insert("REGISTER", new Command("REGISTER"));
    commands.insert("CREATEROOM", new Command("CREATEROOM"));
    commands.insert("REQUESTJOINROOM", new Command("REQUESTJOINROOM"));
    commands.insert("RESPONSEJOINROOM", new Command("RESPONSEJOINROOM"));
    commands.insert("FINDROOM", new Command("FINDROOM"));
    commands.insert("STARTGAME", new Command("STARTGAME"));
    return commands.value(input);
}
