#ifndef CHARACTERPAGE_H
#define CHARACTERPAGE_H

#include "component/basic/basicpage/basicpage.h"

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
private:
    void initService() override;
    void connectSignal() override;
};

#endif // CHARACTERPAGE_H
