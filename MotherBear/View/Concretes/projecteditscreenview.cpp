#include "projecteditscreenview.h"

ProjectEditScreenView::ProjectEditScreenView(QWidget *parent) :
    BaseView(parent),
     ui(new Ui::ProjectEditWindow)
{
     ui->setupUi(this);
     if (controllerRef == nullptr){
         //throw custom exeption here
 }
}

ProjectEditScreenView::~ProjectEditScreenView(){
    delete ui;
    delete controllerRef; //todo give this a look to see if this is needed
}

