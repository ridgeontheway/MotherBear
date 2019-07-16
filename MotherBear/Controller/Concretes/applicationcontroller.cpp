#include "applicationcontroller.h"
#include "View/Concretes/projecteditscreenview.h"

MainWindowScreenController::MainWindowScreenController(std::vector<QWidget> *applicationPages):
    _applicationPages(new QStackedWidget)
{
    ApplicationPagesStackInitialization(applicationPages);
    ApplicationPagesLookupInitialization();

}

void MainWindowScreenController::ApplicationPagesLookupInitialization()
{

}

void MainWindowScreenController::ApplicationPagesStackInitialization(std::vector<QWidget> *applicationPages)
{

}

QStackedWidget *MainWindowScreenController::getApplicationPagesRef()
{
    ProjectEditScreenView _projectView;
    _applicationPages.addWidget(&_projectView);
    return &_applicationPages;
}
