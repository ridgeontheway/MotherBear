#include "Controller/Concretes/mainwindowcontroller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowController tempController;

    return a.exec();
}
