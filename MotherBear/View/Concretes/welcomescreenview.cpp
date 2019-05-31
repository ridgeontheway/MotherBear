#include "welcomescreenview.h"
#include "ui_WelcomeScreen.h"

WelcomeScreenView::WelcomeScreenView(QWidget *parent, iController *ref) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    controllerRef(ref)
{
    ui->setupUi(this);
    if (controllerRef == nullptr){
        //throw custom exeption here
    }
}

WelcomeScreenView::~WelcomeScreenView()
{
    delete ui;
    delete controllerRef; //todo give this a look to see if this is needed
}
