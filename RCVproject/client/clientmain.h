
#ifndef CLIENTMAIN_H
#define CLIENTMAIN_H


#include <QObject>
#include "core/clientcore.h"

class ClientMain : public QObject
{
    Q_OBJECT
public:
    explicit ClientMain(QObject *parent = nullptr);

signals:

};

#endif // CLIENTMAIN_H
