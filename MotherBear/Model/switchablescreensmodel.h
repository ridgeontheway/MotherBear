#ifndef SWITCHABLESCREENSMODEL_H
#define SWITCHABLESCREENSMODEL_H

#include <map>
#include <vector>
#include "View/Concretes/baseview.h"
#include "Model/screeninfomodel.h"

//used in the main window view for switching the screens
class SwitchableScreensModel
{
public:
    inline SwitchableScreensModel(){}
    void addSwithableScreen(std::string screenName, std::string whenPressedMessage, int widgetPosition = 0);
    ScreenInfoModel getSwitchableScreen(std::string name);
    std::vector<std::string> getScreenNames();
private:
    std::map<std::string, ScreenInfoModel> map;
};

#endif // SWITCHABLESCREENSMODEL_H
