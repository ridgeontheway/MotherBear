#ifndef SCREENINFOMODEL_H
#define SCREENINFOMODEL_H

#include <string>
#include"Controller/Abstracts/iscreencontroller.h"

// Represents all the non-QT specific attributes of a screen
class ScreenInfoModel
{
public:
    inline ScreenInfoModel(){}
    ScreenInfoModel(std::string screenName, std::string whenPressedMessage, int widgetPosition = 0);
    void setController(iScreenController* controller);
    std::string getName();
    std::string getMessage();
    int getStackPosition();
    iScreenController* getController();
private:
    std::string name;
    std::string message;
    int stackPosition;
    iScreenController* controller;
};

#endif // SCREENINFOMODEL_H
