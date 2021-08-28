#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "component/basic/basicwindow/basicwindow.h"
#include "component/homepage/homepage.h"

#include "service/calculateservice/calculateservice.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public BasicWindow{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    CalculateService * serviceCalculate = nullptr;

    BasicPage * ui_mainPage = nullptr;
private:
    void initService() override;
    void connectSignal() override;

    void initHomePage();
};
#endif // MAINWINDOW_H
