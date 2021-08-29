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
    serviceCalculate = CalculateService::getInstance();
}

void CharacterPage::connectSignal(){

}

void CharacterPage::on_pushButton_addNormalHit_clicked(){
    NormalAttackPage * page = new NormalAttackPage(ui->widget_normalContainer);
    ui->widget_normalContainer->layout()->addWidget(page);
    page->show();
}

void CharacterPage::on_pushButton_addChargedHit_clicked(){
    NormalAttackPage * page = new NormalAttackPage(ui->widget_chargedContainer);
    ui->widget_chargedContainer->layout()->addWidget(page);
    page->show();
}

void CharacterPage::on_pushButton_addPlunginglHit_clicked(){
    NormalAttackPage * page = new NormalAttackPage(ui->widget_plungingContainer);
    ui->widget_plungingContainer->layout()->addWidget(page);
    page->show();
}

void CharacterPage::on_pushButton_addElementalSkillHit_clicked(){
    ElementalSkillPage * page = new ElementalSkillPage(ui->widget_elementalSkillContainer);
    ui->widget_elementalSkillContainer->layout()->addWidget(page);
    page->show();
}

void CharacterPage::on_pushButton_addElementalBurstHit_clicked(){
    ElementalSkillPage * page = new ElementalSkillPage(ui->widget_elementalBurstContainer);
    ui->widget_elementalBurstContainer->layout()->addWidget(page);
    page->show();
}

void CharacterPage::on_pushButton_addCharacter_clicked(){
    serviceCalculate->addCharacter();
}
