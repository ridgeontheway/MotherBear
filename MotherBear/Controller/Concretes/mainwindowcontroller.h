#ifndef WELCOMESCREENCONTROLLER_H
#define WELCOMESCREENCONTROLLER_H

#include "View/Concretes/mainwindowview.h"
#include "viewroutercontroller.h"
#include "projecteditscreencontroller.h"

class MainWindowController : public iScreenController
{
public:
    MainWindowController();
    void processButtonPress(const char* message) override;
private:
    void initializeView();
    bool isValidRequest(const char* message);
    void processValidNewScreenRequest(const char* message);
    void processValidEditScreenRequest(const char* message);
    void processValidSettingsScreenRequest(const char* message);
    MainWindowView view;
    ViewRouterController viewRouterController;
};

#endif // WELCOMESCREENCONTROLLER_H
