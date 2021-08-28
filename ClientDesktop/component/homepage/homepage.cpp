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

void HomePage::on_pushButton_character_clicked(){
    initPage(&ui_rightPage,ui->widget_rightPage,[](){},[=](){
        ui_rightPage = new CharacterPage(ui->widget_rightPage);
    },[](){});
}

void HomePage::on_pushButton_weapon_clicked(){

}

void HomePage::on_pushButton_talents_clicked(){

}

void HomePage::on_pushButton_relics_clicked(){

}
