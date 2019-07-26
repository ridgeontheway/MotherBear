#include "baseview.h"

BaseView::BaseView(QWidget *parent) : QMainWindow (parent){}

BaseView::~BaseView(){
    controllerRef = nullptr;
}

int BaseView::getQStackedWidgetPosition(){
    return qStackedWidgetPosition;
}

void BaseView::setExternalController(iController *controller){
    controllerRef = controller;
}

void BaseView::setQStackedWidgetPosition(int position){
    qStackedWidgetPosition = position;
}
