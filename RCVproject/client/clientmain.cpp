
#include "clientmain.h"

ClientMain::ClientMain(QObject *parent)
    : QObject{parent}
{
    ClientCore* clientCore = new ClientCore();
}

