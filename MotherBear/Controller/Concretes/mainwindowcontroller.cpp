#include "mainwindowcontroller.h"

MainWindowController::MainWindowController()
{
    view.show();
}

void MainWindowController::processButtonPress(const char* message){
    allowedMessages validMessages;
    if (isValidRequest(message, &validMessages)){
        processValidNewScreenRequest(message, &validMessages);
        processValidEditScreenRequest(message, &validMessages);
        processValidSettingsScreenRequest(message, &validMessages);
    }
    else{

    }
}

bool MainWindowController::isValidRequest(const char *message, allowedMessages* validMessagStruct){
    bool isValid = false;
    if (message == validMessagStruct->newProjectScreen || message == validMessagStruct->editExistingProjectScreen || message == validMessagStruct->settingsScreen){
        isValid = true;
    }
    return isValid;
}

void MainWindowController::processValidNewScreenRequest(const char* message, allowedMessages* validMessagStruct){
    if (message != validMessagStruct->newProjectScreen){
        return;
    }

    view.hide();
}

void MainWindowController::processValidEditScreenRequest(const char *message, allowedMessages *validMessagStruct){
    if (message != validMessagStruct->editExistingProjectScreen){
        return;
    }
}

void MainWindowController::processValidSettingsScreenRequest(const char *message, allowedMessages *validMessagStruct){
    if (message != validMessagStruct->settingsScreen){
        return;
    }
}




