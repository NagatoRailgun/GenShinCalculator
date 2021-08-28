#include "homepage.h"
#include "ui_homepage.h"

HomePage::HomePage(QWidget *parent) :
    BasicPage(parent),
    ui(new Ui::HomePage){
    ui->setupUi(this);
    initService();
    connectSignal();
}

HomePage::~HomePage(){
    delete ui;
}

void HomePage::initService(){

}

void HomePage::connectSignal(){

}
