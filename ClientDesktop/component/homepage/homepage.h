#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include "component/basic/basicpage/basicpage.h"
#include "component/characterpage/characterpage.h"

namespace Ui {
class HomePage;
}

class HomePage : public BasicPage{
    Q_OBJECT
public:
    explicit HomePage(QWidget *parent = nullptr);
    ~HomePage();
private:
    Ui::HomePage *ui;

    BasicPage * ui_rightPage = nullptr;
private:
    void initService() override;
    void connectSignal() override;
private slots:
    void on_pushButton_character_clicked();
    void on_pushButton_weapon_clicked();
    void on_pushButton_talents_clicked();
    void on_pushButton_relics_clicked();
};

#endif // HOMEPAGE_H
