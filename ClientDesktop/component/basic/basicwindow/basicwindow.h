#ifndef BASICWINDOW_H
#define BASICWINDOW_H

#include <QMainWindow>
#include "component/basic/basicpage/basicpage.h"

class BasicWindow : public QMainWindow{
    Q_OBJECT
public:
    explicit BasicWindow(QWidget *parent = nullptr);

    virtual void initService() = 0;
    virtual void connectSignal() = 0;

    void initPage(BasicPage ** point,QWidget * container,std::function<void()>before,std::function<void()>init,std::function<void()>after);
signals:

};

#endif // BASICWINDOW_H
