
#ifndef REQUESTPROCESSOR_H
#define REQUESTPROCESSOR_H


#include <QObject>


class RequestProcessor : public QObject
{
    Q_OBJECT
public:
    explicit RequestProcessor(QObject *parent = nullptr);

signals:

};

#endif // REQUESTPROCESSOR_H
