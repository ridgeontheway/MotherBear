#include "projecteditscreenview.h"
#include "ui_projecteditscreen.h"

//will be the view which contains the block-based user interface
ProjectEditScreenView::ProjectEditScreenView(QWidget *parent, iController *ref) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    controllerRef(ref)
{
    ui->setupUi(this);
    if (controllerRef == nullptr){
        //trow custom exeption here
    }
}

ProjectEditScreenView::~ProjectEditScreenView()
{
    delete ui;
    delete controllerRef;
}
