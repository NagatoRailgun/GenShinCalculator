#ifndef BASICWINDOW_H
#define BASICWINDOW_H

#include <QMainWindow>

class BasicWindow : public QMainWindow{
    Q_OBJECT
public:
    explicit BasicWindow(QWidget *parent = nullptr);
public:
    virtual void initService() = 0;
    virtual void connectSignal() = 0;
signals:

};

#endif // BASICWINDOW_H
