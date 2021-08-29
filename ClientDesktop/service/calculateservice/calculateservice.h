#ifndef CALCULATESERVICE_H
#define CALCULATESERVICE_H

#include "genshincolculatorcore.h"
#include "GenShinColculatorCore_global.h"
#include "calculateAPIFormat.h"

#include "service/basicservice/basicservice.h"

class CalculateService : public BasicService{
    Q_OBJECT
public:
    ~CalculateService();
    static CalculateService * getInstance(QObject * parent = nullptr);

    void addCharacter();//添加角色方法
private:
    static CalculateService * instance;

    GenShinColculatorCore * core = nullptr;
private:
    CalculateService(QObject * parent = nullptr);
};

#endif // CALCULATESERVICE_H
