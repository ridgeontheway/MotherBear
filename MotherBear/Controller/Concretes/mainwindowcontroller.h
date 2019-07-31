#ifndef WELCOMESCREENCONTROLLER_H
#define WELCOMESCREENCONTROLLER_H

#include "View/Concretes/mainwindowview.h"
#include "projecteditscreencontroller.h"
#include "Model/viewsignalmodel.h"

class MainWindowController : public iScreenController
{
public:
    MainWindowController();
    void processButtonPress(const char* message) override;
private:
    bool isValidRequest(const char* message);
    void processValidNewScreenRequest(const char* message);
    void processValidEditScreenRequest(const char* message);
    void processValidSettingsScreenRequest(const char* message);
    MainWindowView view;
    ViewSignalModel signalModel;
};

#endif // WELCOMESCREENCONTROLLER_H
