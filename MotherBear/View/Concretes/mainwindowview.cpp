#include "mainwindowview.h"

MainWindowScreenView::MainWindowScreenView(QWidget *parent, iController *ref) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    controllerRef(ref)
{
    ui->setupUi(this);
    if (controllerRef == nullptr){
        //throw custom exeption here
    }
}

MainWindowScreenView::~MainWindowScreenView()
{
    delete ui;
    delete controllerRef; //todo give this a look to see if this is needed
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
