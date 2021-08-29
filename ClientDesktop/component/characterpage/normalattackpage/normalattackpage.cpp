#include "normalattackpage.h"
#include "ui_normalattackpage.h"

NormalAttackPage::NormalAttackPage(QWidget *parent) :
    BasicPage(parent),
    ui(new Ui::NormalAttackPage){
    ui->setupUi(this);
    initService();
    connectSignal();
}

NormalAttackPage::~NormalAttackPage(){
    delete ui;
}

void NormalAttackPage::initService(){

}

void NormalAttackPage::connectSignal(){

}
