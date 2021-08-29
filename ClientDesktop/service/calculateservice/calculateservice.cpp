#include "calculateservice.h"

CalculateService::CalculateService(QObject *parent):BasicService(parent){
    if(instance==nullptr){
        instance = this;
        core = new GenShinColculatorCore();
    }
}

CalculateService::~CalculateService(){
    instance = nullptr;
    delete core;
}

CalculateService * CalculateService::instance = nullptr;

CalculateService * CalculateService::getInstance(QObject * parent){
    if(instance==nullptr){
        return new CalculateService(parent);
    }
    return instance;
}

void CalculateService::addCharacter(){
    GENSHINCalculatorContext context;
    context.callback.sender = this;
    context.callback.after = [](void * sender,char * data,int len){

    };
    core->addCharacter(context);
}
