#include "projecteditscreencontroller.h"
#include "Controller/Exceptions/invalidmessageexeption.h"
#include <iostream>

//here is where actually use the iframe
ProjectEditScreenController::ProjectEditScreenController()
{
    view.show();
}

ProjectEditScreenController::ProjectEditScreenController(iController *parent){
    if (parent != nullptr){
        delete parent;
    }
    view.show();
}

void ProjectEditScreenController::processButtonPress(const char *message){
    //probably where the title card is going here
}
