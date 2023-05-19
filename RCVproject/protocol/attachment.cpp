
#include "attachment.h"

Attachment::Attachment(QObject *parent)
    : QObject(parent)
{
    sendMessage = "";
    active = QAtomicInt(1);
    returnMessage.append("");
}

Attachment::Attachment(QString msg, QAtomicInt act, QObject *parent)
    : QObject(parent)
{
    this->sendMessage = msg;
    this->active = act;
    returnMessage.append("");
}

Attachment::~Attachment()
{
}

quint64 Attachment::getAttachmentID()
{
    return attachmentID;
}

void Attachment::setAttachmentID(int id)
{
    attachmentID = id;
}

QString Attachment::getSendMessage()
{
    return sendMessage;
}

QString Attachment::getReturnMessage()
{
    return returnMessage[0];
}

void Attachment::setReturnMessage(QString retMsg)
{
    returnMessage[0] = retMsg;
}

QAtomicInt Attachment::getActive()
{
    return this->active;
}

QAbstractSocket* Attachment::getSocket()
{
    return this->socket;
}

void Attachment::setSocket(QAbstractSocket *sock)
{
    socket = sock;
}
