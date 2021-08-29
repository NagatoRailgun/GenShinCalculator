#ifndef ELEMENTALSKILLPAGE_H
#define ELEMENTALSKILLPAGE_H

#include <QWidget>

namespace Ui {
class ElementalSkillPage;
}

class ElementalSkillPage : public QWidget
{
    Q_OBJECT

public:
    explicit ElementalSkillPage(QWidget *parent = nullptr);
    ~ElementalSkillPage();

private:
    Ui::ElementalSkillPage *ui;
};

#endif // ELEMENTALSKILLPAGE_H
