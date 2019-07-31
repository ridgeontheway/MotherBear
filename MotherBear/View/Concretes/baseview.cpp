#include "baseview.h"

BaseView::BaseView(QWidget *parent) : QMainWindow (parent){}

BaseView::~BaseView(){
    controllerRef = nullptr;
}

void BaseView::setQStackedWidgetPosition(int pos){
    qStackedWidgetPosition = pos;
}

int BaseView::getQStackedWidgetPosition(){
    return qStackedWidgetPosition;
}

void BaseView::setExternalController(iController *controller){
    controllerRef = controller;
}

iController* BaseView::getExternalController(){
    return controllerRef;
}
