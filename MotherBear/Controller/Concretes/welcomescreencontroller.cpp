#include "welcomescreencontroller.h"

WelcomeScreenController::WelcomeScreenController()
{
    view.show();
}

void WelcomeScreenController::processButtonPress(const char* message){
    allowedMessages validMessages;
    if (isValidRequest(message, &validMessages)){
        //we have a valid request, now we need to see what request
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

}

void WelcomeScreenController::processValidEditScreenRequest(const char *message, allowedMessages *validMessagStruct){
    if (message != validMessagStruct->editExistingProjectScreen){

    }
}

void WelcomeScreenController::processValidSettingsScreenRequest(const char *message, allowedMessages *validMessagStruct){
    if (message != validMessagStruct->settingsScreen){

    }
}




