#include "genshincolculatorcore.h"
#include "characterservice/characterservice.h"

GenShinColculatorCore::GenShinColculatorCore(){
    initService();
}

GenShinColculatorCore::~GenShinColculatorCore(){
    delete reinterpret_cast<CharacterService *>(serviceCharacter);
}

void GenShinColculatorCore::initService(){
    serviceCharacter = CharacterService::getInstance();
}

void GenShinColculatorCore::addCharacter(GENSHINCalculatorContext context){
    CharacterService::getInstance()->addCharacter(context);
}
