#ifndef WELCOMESCREENCONTROLLER_H
#define WELCOMESCREENCONTROLLER_H

#include "View/Concretes/mainwindowview.h"
#include "projecteditscreencontroller.h"

class MainWindowController : iController
{
public:
    MainWindowController();
    void processButtonPress(const char* message) override;
private:
    struct allowedMessages{
        const char* newProjectScreen = "NEW_SCREEN";
        const char* editExistingProjectScreen = "EDIT_SCREEN";
        const char* settingsScreen = "SETTINGS_SCREEN";
    };

    bool isValidRequest(const char* message, allowedMessages *validMessagStruct);
    void processValidNewScreenRequest(const char* message, allowedMessages *validMessagStruct);
    void processValidEditScreenRequest(const char* message, allowedMessages *validMessagStruct);
    void processValidSettingsScreenRequest(const char* message, allowedMessages *validMessagStruct);
    MainWindowView view;
};

#endif // WELCOMESCREENCONTROLLER_H
