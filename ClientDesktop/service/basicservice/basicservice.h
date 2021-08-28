#ifndef BASICSERVICE_H
#define BASICSERVICE_H

#include <QObject>

class BasicService : public QObject{
    Q_OBJECT
public:
    explicit BasicService(QObject *parent = nullptr);
signals:

};

#endif // BASICSERVICE_H
