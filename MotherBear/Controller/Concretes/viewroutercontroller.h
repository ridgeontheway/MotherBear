#ifndef VIEWROUTERCONTROLLER_H
#define VIEWROUTERCONTROLLER_H

#include "Model/switchablescreensmodel.h"
#include "Controller/Concretes/configparsercontroller.h"
#include <vector>

class ViewRouterController
{
public:
    inline ViewRouterController(std::string configLocation): settingsParser(configLocation, &model) {}
    inline SwitchableScreensModel* getModel(){return &model;}
private:
    SwitchableScreensModel model;
    ConfigParserController settingsParser;
};


#endif // VIEWROUTERCONTROLLER_H
