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



void MainWindowView::on_newProjectButton_clicked()
{
    //send a message here
}


void MainWindowView::on_editProjectButton_clicked()
{

}


void MainWindowView::on_settingsButton_clicked()
{

}

int MainWindowView::getQStackedWidgetPosition(){
    return 1;
}
