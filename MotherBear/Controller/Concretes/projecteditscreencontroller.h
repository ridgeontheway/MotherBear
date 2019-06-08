#ifndef PROJECTEDITSCREENCONTROLLER_H
#define PROJECTEDITSCREENCONTROLLER_H

#include "View/Concretes/projecteditscreenview.h"
#include "Controller/Abstracts/icontroller.h"

class ProjectEditScreenController : iController
{
public:
    ProjectEditScreenController();
    ProjectEditScreenController(iController *parent);
    void processButtonPress(const char* message) override;
private:
    ProjectEditScreenView view;
};

#endif // PROJECTEDITSCREENCONTROLLER_H
