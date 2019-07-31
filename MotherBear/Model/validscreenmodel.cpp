#include "validscreenmodel.h"

bool ValidScreenModel::isValidScreen(std::string screenName){
    bool isValid = false;
    if (map.count(screenName) > 0){
        isValid = true;
    }
    return isValid;
}

void ValidScreenModel::setValidScreen(std::string screenName){
    map.insert(std::pair<std::string, bool>(screenName, true));
}
