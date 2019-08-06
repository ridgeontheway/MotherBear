#ifndef CONFIGPARSERCONTROLLER_H
#define CONFIGPARSERCONTROLLER_H

#include <string>
#include <iostream>
#include <fstream>
#include "Model/switchablescreensmodel.h"

//Class responsable for parsing all the settings that the user / programmer will set
class ConfigParserController
{
public:
    ConfigParserController(std::string configFilePath, SwitchableScreensModel* model);
    SwitchableScreensModel getSwitchableScreenModel();
private:
    void parseConfigFile(std::string configFilePath);
    inline void setSwichableScreenModel(SwitchableScreensModel* model){switchableScreenModel = model;}
    //these guys will get initialized by this controller
    SwitchableScreensModel* switchableScreenModel;
};

#endif // CONFIGPARSERCONTROLLER_H
