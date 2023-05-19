
#ifndef COMMAND_H
#define COMMAND_H


#include <QObject>
#include <QMap>

class Command : public QObject
{
    Q_OBJECT

public:
    explicit Command(QObject *parent = nullptr);
    explicit Command(QString cmd, /*Priority priority,*/ QObject *parent = nullptr);

//    enum Priority {
//        CRITICAL = 0,
//        HIGH = 1,
//        NORMAL = 2,
//        LOW = 3
//    };

public slots:
    static Command* toCommand(QString input);
    QString getCommandString();
//    Priority getCommandPriority();
//    quint64 comparePriority(Command* anotherCommand);

private:
    QString command;
//    Priority priority;

signals:

};



#endif // COMMAND_H
