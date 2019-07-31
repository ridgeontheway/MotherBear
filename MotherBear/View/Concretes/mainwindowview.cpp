#include "mainwindowview.h"

MainWindowView::MainWindowView(QWidget *parent) :
    BaseView(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}



void MainWindowView::on_newProjectButton_clicked()
{
    getExternalController()->processButtonPress(signalModel->getNewProjectScreenMessage());
}


void MainWindowView::on_editProjectButton_clicked()
{
    getExternalController()->processButtonPress(signalModel->getEditExistingProjectScreenMessage());
}

void MainWindowView::on_settingsButton_clicked()
{
    getExternalController()->processButtonPress(signalModel->getNewProjectScreenMessage());
}

void MainWindowView::pushQStackedWidgetPosition(BaseView *newScreen){
    ui->stackedWidget->addWidget(newScreen);
}

void MainWindowView::insertQStackedWidget(BaseView *newScreen, int pos){
    if (ui->stackedWidget->count()+1 != pos){
        //TODO: throw an exception here for unexpected
    }
    ui->stackedWidget->insertWidget(pos, newScreen);
}

void MainWindowView::setSignalModel(ViewSignalModel *model){
    signalModel = model;
}

MainWindowView::~MainWindowView()
{
    delete ui;
}
