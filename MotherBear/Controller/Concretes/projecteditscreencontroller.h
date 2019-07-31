#ifndef PROJECTEDITSCREENCONTROLLER_H
#define PROJECTEDITSCREENCONTROLLER_H

#include "View/Concretes/projecteditscreenview.h"

class ProjectEditScreenController : public iScreenController
{
public:
    ProjectEditScreenController();
    ProjectEditScreenController(iScreenController *parent);
    void processButtonPress(const char* message) override;
private:
    ProjectEditScreenView view;
};

#endif // PROJECTEDITSCREENCONTROLLER_H
