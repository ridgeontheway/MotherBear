#ifndef WELCOMESCREENCONTROLLER_H
#define WELCOMESCREENCONTROLLER_H

#include "View/Concretes/welcomescreenview.h"

class WelcomeScreenController : iController
{
public:
    WelcomeScreenController();
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
    WelcomeScreenView view;
};

#endif // WELCOMESCREENCONTROLLER_H
