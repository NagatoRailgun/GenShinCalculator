#ifndef BASICPAGE_H
#define BASICPAGE_H

#include <QWidget>
#include <QLayout>

class BasicPage : public QWidget
{
    Q_OBJECT
public:
    explicit BasicPage(QWidget *parent = nullptr);

    virtual void initService() = 0;
    virtual void connectSignal() = 0;

    void initPage(BasicPage ** point,QWidget * container,std::function<void()>before,std::function<void()>init,std::function<void()>after);
signals:

};

#endif // BASICPAGE_H
