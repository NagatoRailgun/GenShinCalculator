#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : BasicWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
    initService();
    connectSignal();
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::initService(){
    serviceCalculate = CalculateService::getInstance(this);
}

void MainWindow::connectSignal(){

}
