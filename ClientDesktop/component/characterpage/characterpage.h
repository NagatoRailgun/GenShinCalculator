#ifndef CHARACTERPAGE_H
#define CHARACTERPAGE_H

#include "component/basic/basicpage/basicpage.h"
#include "normalattackpage/normalattackpage.h"
#include "elementalskillpage/elementalskillpage.h"

#include "service/calculateservice/calculateservice.h"

namespace Ui {
class CharacterPage;
}

class CharacterPage : public BasicPage{
    Q_OBJECT
public:
    explicit CharacterPage(QWidget *parent = nullptr);
    ~CharacterPage();
private:
    Ui::CharacterPage *ui;
    CalculateService * serviceCalculate = nullptr;
private:
    void initService() override;
    void connectSignal() override;
private slots:
    void on_pushButton_addNormalHit_clicked();
    void on_pushButton_addChargedHit_clicked();
    void on_pushButton_addPlunginglHit_clicked();
    void on_pushButton_addElementalSkillHit_clicked();
    void on_pushButton_addElementalBurstHit_clicked();
    void on_pushButton_addCharacter_clicked();
};

#endif // CHARACTERPAGE_H
