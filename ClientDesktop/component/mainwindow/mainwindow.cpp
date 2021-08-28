#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : BasicWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
    initService();
    connectSignal();
    initHomePage();
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::initService(){
    serviceCalculate = CalculateService::getInstance(this);
}

void MainWindow::connectSignal(){

}

void MainWindow::initHomePage(){
    initPage(&ui_mainPage,ui->centralwidget,[](){},[=](){
        ui_mainPage = new HomePage(ui->centralwidget);
    },[](){});
}
