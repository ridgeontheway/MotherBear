#include "mainwindowview.h"

MainWindowView::MainWindowView(QWidget *parent) :
    BaseView(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

void MainWindowView::pushQStackedWidgetPosition(QWidget *newScreen){
    ui->stackedWidget->addWidget(newScreen);
}

void MainWindowView::insertQStackedWidget(QWidget *newScreen, int pos){
    if (ui->stackedWidget->count()+1 != pos){
        //TODO: throw an exception here for unexpected
    }
    ui->stackedWidget->insertWidget(pos, newScreen);
}

MainWindowView::~MainWindowView()
{
    delete ui;
}
