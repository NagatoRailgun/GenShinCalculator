#include "elementalskillpage.h"
#include "ui_elementalskillpage.h"

ElementalSkillPage::ElementalSkillPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ElementalSkillPage)
{
    ui->setupUi(this);
}

ElementalSkillPage::~ElementalSkillPage()
{
    delete ui;
}
