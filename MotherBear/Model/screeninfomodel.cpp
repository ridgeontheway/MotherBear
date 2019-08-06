#include "screeninfomodel.h"

ScreenInfoModel::ScreenInfoModel(std::string screenName, std::string whenPressedMessage, int widgetPosition)
{
    name = screenName;
    message = whenPressedMessage;
    stackPosition = widgetPosition;
}

void ScreenInfoModel::setController(iScreenController *controller){
    this->controller = controller;
}

std::string ScreenInfoModel::getName(){
    return this->name;
}
