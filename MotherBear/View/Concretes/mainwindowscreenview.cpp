#include "mainwindowscreenview.h"

MainWindowScreenView::MainWindowScreenView(QWidget *parent, iController *ref) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    controllerRef(ref)
{
    if (controllerRef == nullptr){
        //throw custom exeption here
    }
    ui->setupUi(this);
    //
}

MainWindowScreenView::~MainWindowScreenView()
{
    delete ui;
    delete controllerRef; //todo give this a look to see if this is needed
}

void MainWindowScreenView::editTemp(MainWindowScreenController *temp){
   // ui->stackedWidget->setCurrentWidget(temp->getApplicationPagesRef()->);
}

void MainWindowScreenView::on_NewProjectButton_clicked()
{
    controllerRef->processButtonPress("NEW_SCREEN");
}

void MainWindowScreenView::on_LoadProjectButton_clicked()
{

}

void MainWindowScreenView::on_SettingsButton_clicked()
{

}
