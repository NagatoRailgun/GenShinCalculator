#include "basicwindow.h"

BasicWindow::BasicWindow(QWidget *parent) : QMainWindow(parent){

}

void BasicWindow::initPage(BasicPage ** point,QWidget * container,std::function<void()>before,std::function<void()>init,std::function<void()>after){
    delete *point;
    before();
    init();
    if(container->layout()){
       container->layout()->addWidget(*point);
    }
    after();
}
