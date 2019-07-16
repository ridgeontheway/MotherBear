#include "Controller/Concretes/welcomescreencontroller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowScreenController appController(nullptr);
    WelcomeScreenController tempController(&appController);

    return a.exec();
}
