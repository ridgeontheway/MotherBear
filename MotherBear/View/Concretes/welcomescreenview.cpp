#include "welcomescreenview.h"

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

void WelcomeScreenView::on_NewProjectButton_clicked()
{
    controllerRef->processButtonPress("NEW_SCREEN");
}

void WelcomeScreenView::on_LoadProjectButton_clicked()
{

}

void WelcomeScreenView::on_SettingsButton_clicked()
{

}
