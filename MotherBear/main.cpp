#include "mainwindow.h"
#include "Controller/Concretes/welcomescreencontroller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WelcomeScreenController tempController;

    return a.exec();
}
