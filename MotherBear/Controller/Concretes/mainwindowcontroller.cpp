#include "mainwindowcontroller.h"
#include <iostream>
MainWindowController::MainWindowController()
{
    view.setSignalModel(&signalModel);
    view.setExternalController(this);
    view.show();
}

void MainWindowController::processButtonPress(const char* message){
    if (isValidRequest(message)){
        processValidNewScreenRequest(message);
        processValidEditScreenRequest(message);
        processValidSettingsScreenRequest(message);
    }
    else{

    }
}

bool MainWindowController::isValidRequest(const char *message){
    bool isValid = false;
    if (message == signalModel.getSettingsScreenMessage() || message == signalModel.getNewProjectScreenMessage() || message == signalModel.getEditExistingProjectScreenMessage()){
        isValid = true;
    }
    return isValid;
}

void MainWindowController::processValidNewScreenRequest(const char* message){
    if (message != signalModel.getNewProjectScreenMessage()){
        return;
    }
    //TODO: here we need to switch the screens
    std::cout << "NEW SCREEN RECIEVED?" << std::endl;

}

void MainWindowController::processValidEditScreenRequest(const char *message){
    if (message != signalModel.getEditExistingProjectScreenMessage()){
        return;
    }
}

void MainWindowController::processValidSettingsScreenRequest(const char *message){
    if (message != signalModel.getSettingsScreenMessage()){
        return;
    }
}




