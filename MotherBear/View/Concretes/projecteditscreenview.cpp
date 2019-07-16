#include "projecteditscreenview.h"

ProjectEditScreenView::ProjectEditScreenView(QWidget *parent, iController *ref) :
    QWidget (parent),
    ui(new Ui::ProjectEditScreen),
    controllerRef(ref)
{
    ui->setupUi(this);
    if (controllerRef == nullptr){

    }
}

ProjectEditScreenView::~ProjectEditScreenView()
{
    delete ui;
    delete controllerRef;
}

