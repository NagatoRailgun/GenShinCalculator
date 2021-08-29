#include "characterservice.h"

CharacterService::CharacterService(QObject *parent):BasicService(parent){
    if(instance==nullptr){
        instance = this;
    }
}

CharacterService::~CharacterService(){
    instance = nullptr;
}

CharacterService * CharacterService::getInstance(QObject * parent){
    if(instance==nullptr){
        return new CharacterService(parent);
    }
    return instance;
}

CharacterService * CharacterService::instance = nullptr;

void CharacterService::addCharacter(GENSHINCalculatorContext context){
    Character character;
    character.id = autoID++;
    characterList.push_back(character);
}
