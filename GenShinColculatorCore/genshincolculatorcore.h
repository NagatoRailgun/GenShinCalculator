#ifndef GENSHINCOLCULATORCORE_H
#define GENSHINCOLCULATORCORE_H

#include "GenShinColculatorCore_global.h"
#include "calculateAPIFormat.h"

class GENSHINCOLCULATORCORE_EXPORT GenShinColculatorCore{
public:
    GenShinColculatorCore();
    ~GenShinColculatorCore();

    void addCharacter(GENSHINCalculatorContext context);//新增角色
private:
    void * serviceCharacter = nullptr;
private:
    void initService();
};

#endif // GENSHINCOLCULATORCORE_H
