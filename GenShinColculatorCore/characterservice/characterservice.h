#ifndef CHARACTERSERVICE_H
#define CHARACTERSERVICE_H

#include "basicservice/basicservice.h"
#include "calculateAPIFormat.h"

class CharacterService : public BasicService{
    Q_OBJECT
public:
    typedef struct{
        GENSHINCalculatorID id = -1;
        QString name;
        bool saveFlag = false;
        ELEMENT_TYPE element = ELEMENT_TYPE_NONE;
        WEAPON_TYPE weapon = WEAPON_TYPE_NONE;
        NATION_TYPE nation = NATION_TYPE_NONE;
    } Character;
public:
    ~CharacterService();
    static CharacterService * getInstance(QObject * parent = nullptr);

    void addCharacter(GENSHINCalculatorContext context);
private:
    static CharacterService * instance;
    int autoID = 0;
    QList<Character>characterList;
private:
    CharacterService(QObject * parent = nullptr);
};

#endif // CHARACTERSERVICE_H
