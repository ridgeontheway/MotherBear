#include "welcomescreencontroller.h"
#include "Controller/Exceptions/invalidmessageexeption.h"
#include <iostream>

using namespace std;

WelcomeScreenController::WelcomeScreenController()
{
    view.show();
}

void WelcomeScreenController::processButtonPress(const char* message){
    allowedMessages validMessages;
    try{
        isValidRequest(message, &validMessages);
    }
    catch (invalidMessageExeption& x){
        cout << x.what() << endl;
    }
    processValidNewScreenRequest(message, &validMessages);
    processValidEditScreenRequest(message, &validMessages);
    processValidSettingsScreenRequest(message, &validMessages);
}

bool WelcomeScreenController::isValidRequest(const char *message, allowedMessages* validMessagStruct){
    bool isValid = true;
    if (message != validMessagStruct->newProjectScreen && message != validMessagStruct->editExistingProjectScreen && message != validMessagStruct->settingsScreen){
        throw  invalidMessageExeption();
    }
    return isValid;
}

void WelcomeScreenController::processValidNewScreenRequest(const char* message, allowedMessages* validMessagStruct){
    if (message != validMessagStruct->newProjectScreen){
        return;
    }
    //fill this with the new poject screen

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




