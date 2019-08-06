#include "mainwindowcontroller.h"
#include <iostream>
MainWindowController::MainWindowController() :
    viewRouterController("Settings/screen_info.csv")
{
    view.setExternalController(this);
    initializeView();
    view.show();
}

void MainWindowController::initializeView(){
    SwitchableScreensModel* modelPtr = viewRouterController.getModel();
    std::vector<std::string> screenNames = modelPtr->getScreenNames();

    for (int i = 0; i < screenNames.size(); i++){
        std::string currName = screenNames[i];
        if (currName == "EditProject"){
            //TOOD add the edit project screen to the view
        }
        else if (currName == "Settings"){
            //TODO add the settings screen to the view
        }
    }

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

    return isValid;
}

void MainWindowController::processValidNewScreenRequest(const char* message){

    //TODO: here we need to switch the screens
    std::cout << "NEW SCREEN RECIEVED?" << std::endl;

}

void MainWindowController::processValidEditScreenRequest(const char *message){

}

void MainWindowController::processValidSettingsScreenRequest(const char *message){

}




