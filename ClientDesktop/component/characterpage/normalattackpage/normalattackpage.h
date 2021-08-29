#ifndef NORMALATTACKPAGE_H
#define NORMALATTACKPAGE_H

#include "component/basic/basicpage/basicpage.h"

namespace Ui {
class NormalAttackPage;
}

class NormalAttackPage : public BasicPage{
    Q_OBJECT
public:
    explicit NormalAttackPage(QWidget *parent = nullptr);
    ~NormalAttackPage();
private:
    Ui::NormalAttackPage *ui;
private:
    void initService() override;
    void connectSignal() override;
};

#endif // NORMALATTACKPAGE_H
