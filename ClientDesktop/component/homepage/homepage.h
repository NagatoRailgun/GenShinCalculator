#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include "component/basic/basicpage/basicpage.h"

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
private:
    void initService() override;
    void connectSignal() override;
};

#endif // HOMEPAGE_H
