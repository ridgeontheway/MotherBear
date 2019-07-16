#include "welcomescreencontroller.h"

WelcomeScreenController::WelcomeScreenController()
{
    view.show();
}

void WelcomeScreenController::processButtonPress(const char* message){
    allowedMessages validMessages;
    if (isValidRequest(message, &validMessages)){
        processValidNewScreenRequest(message, &validMessages);
        processValidEditScreenRequest(message, &validMessages);
        processValidSettingsScreenRequest(message, &validMessages);
    }
    else{

    }
}

bool WelcomeScreenController::isValidRequest(const char *message, allowedMessages* validMessagStruct){
    bool isValid = false;
    if (message == validMessagStruct->newProjectScreen || message == validMessagStruct->editExistingProjectScreen || message == validMessagStruct->settingsScreen){
        isValid = true;
    }
    return isValid;
}

void WelcomeScreenController::processValidNewScreenRequest(const char* message, allowedMessages* validMessagStruct){
    if (message != validMessagStruct->newProjectScreen){
        return;
    }

    view.hide();
}

void WelcomeScreenController::processValidEditScreenRequest(const char *message, allowedMessages *validMessagStruct){
    if (message != validMessagStruct->editExistingProjectScreen){
        return;
    }
}

void WelcomeScreenController::processValidSettingsScreenRequest(const char *message, allowedMessages *validMessagStruct){
    if (message != validMessagStruct->settingsScreen){
        return;
    }
}




