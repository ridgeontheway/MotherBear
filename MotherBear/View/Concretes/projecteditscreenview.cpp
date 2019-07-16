#include "projecteditscreenview.h"

ProjectEditScreenView::ProjectEditScreenView(QWidget *parent, iController *ref) :
     QMainWindow(parent),
     ui(new Ui::MainWindow),
     controllerRef(ref)
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
