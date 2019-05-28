#include "welcomescreenview.h"
#include "ui_WelcomeScreen.h"

WelcomeScreenView::WelcomeScreenView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

WelcomeScreenView::~WelcomeScreenView()
{
    delete ui;
}

