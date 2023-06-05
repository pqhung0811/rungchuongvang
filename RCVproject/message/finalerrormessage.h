
#ifndef FINALERRORMESSAGE_H
#define FINALERRORMESSAGE_H

#include "servermessage.h"



class FinalErrorMessage : public ServerMessage
{
public:
    explicit FinalErrorMessage(QObject *parent = nullptr);
    explicit FinalErrorMessage(QString status, QString errorMsg, QString cmd, QObject *parent = nullptr);
};

#endif // FINALERRORMESSAGE_H
