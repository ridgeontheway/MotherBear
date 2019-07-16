#include "mainwindowcontroller.h"

MainWindowScreenController::MainWindowScreenController()
{
    view.show();
}

void MainWindowScreenController::processButtonPress(const char* message){
    allowedMessages validMessages;
    if (isValidRequest(message, &validMessages)){
        processValidNewScreenRequest(message, &validMessages);
        processValidEditScreenRequest(message, &validMessages);
        processValidSettingsScreenRequest(message, &validMessages);
    }
    else{

    }
}

bool MainWindowScreenController::isValidRequest(const char *message, allowedMessages* validMessagStruct){
    bool isValid = false;
    if (message == validMessagStruct->newProjectScreen || message == validMessagStruct->editExistingProjectScreen || message == validMessagStruct->settingsScreen){
        isValid = true;
    }
    return isValid;
}

void MainWindowScreenController::processValidNewScreenRequest(const char* message, allowedMessages* validMessagStruct){
    if (message != validMessagStruct->newProjectScreen){
        return;
    }

    view.hide();
}

void MainWindowScreenController::processValidEditScreenRequest(const char *message, allowedMessages *validMessagStruct){
    if (message != validMessagStruct->editExistingProjectScreen){
        return;
    }
}

void MainWindowScreenController::processValidSettingsScreenRequest(const char *message, allowedMessages *validMessagStruct){
    if (message != validMessagStruct->settingsScreen){
        return;
    }
}




