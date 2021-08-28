#ifndef BASICPAGE_H
#define BASICPAGE_H

#include <QWidget>

class BasicPage : public QWidget
{
    Q_OBJECT
public:
    explicit BasicPage(QWidget *parent = nullptr);
public:
    virtual void initService() = 0;
    virtual void connectSignal() = 0;
signals:

};

#endif // BASICPAGE_H
