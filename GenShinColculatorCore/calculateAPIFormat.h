#ifndef CALCULATEAPIFORMAT_H
#define CALCULATEAPIFORMAT_H

#define GENSHINCalculatorID int

typedef struct{
    void * sender = nullptr;
    void (*after)(void *,char *,int);
} GENSHINCalculatorCallback;

typedef struct{
    GENSHINCalculatorCallback callback;
    char * data = nullptr;
}GENSHINCalculatorContext;



#endif // CALCULATEAPIFORMAT_H
