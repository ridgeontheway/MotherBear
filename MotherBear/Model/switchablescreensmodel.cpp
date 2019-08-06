#include "switchablescreensmodel.h"

void SwitchableScreensModel::addSwithableScreen(std::string screenName, std::string whenPressedMessage, int widgetPosition){
    ScreenInfoModel screen(screenName, whenPressedMessage, widgetPosition);
    map.insert(std::pair<std::string, ScreenInfoModel>(screen.getName(), screen));
}

ScreenInfoModel SwitchableScreensModel::getSwitchableScreen(std::string name){
    return map[name];
}

std::vector<std::string> SwitchableScreensModel::getScreenNames(){
    std::vector<std::string> returnVector;
    std::map<std::string, ScreenInfoModel>::iterator it = map.begin();

    while (it != map.end()){
        returnVector.push_back(it->first);
    }

    return returnVector;
}


