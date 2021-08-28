#include "characterpage.h"
#include "ui_characterpage.h"

CharacterPage::CharacterPage(QWidget *parent) :
    BasicPage(parent),
    ui(new Ui::CharacterPage){
    ui->setupUi(this);
    initService();
    connectSignal();
}

CharacterPage::~CharacterPage(){
    delete ui;
}

void CharacterPage::initService(){

}

void CharacterPage::connectSignal(){

}
