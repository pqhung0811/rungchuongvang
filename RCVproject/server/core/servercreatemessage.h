
#ifndef SERVERCREATEMESSAGE_H
#define SERVERCREATEMESSAGE_H


#include <QObject>
#include "requestprocessing.h"
#include "login/loginservermessage.h"
#include "logout/logoutservermessage.h"
#include "register/registerservermessage.h"
#include "finalerrormessage.h"

class ServerCreateMessage : public QObject
{
    Q_OBJECT
private:
    RequestProcessing* requestProcessing;

public:
    explicit ServerCreateMessage(QObject *parent = nullptr);

    RequestProcessing *getRequestProcessing() const;
    void setRequestProcessing(RequestProcessing *newRequestProcessing);

public slots:
    QString createMessage(QString msg);


signals:

};

#endif // SERVERCREATEMESSAGE_H