#include "mainwindowview.h"

MainWindowView::MainWindowView(QWidget *parent, iController *ref) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    controllerRef(ref)
{
    ui->setupUi(this);
    if (controllerRef == nullptr){
        //throw custom exeption here
    }
}

MainWindowView::~MainWindowView()
{
    delete ui;
    delete controllerRef; //todo give this a look to see if this is needed
}

void MainWindowView::on_NewProjectButton_clicked()
{
    controllerRef->processButtonPress("NEW_SCREEN");
}

void MainWindowView::on_LoadProjectButton_clicked()
{

}

void MainWindowView::on_SettingsButton_clicked()
{

}
