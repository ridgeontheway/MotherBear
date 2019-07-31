#ifndef CONFIGPARSERCONTROLLER_H
#define CONFIGPARSERCONTROLLER_H

#include <string>
#include <iostream>
#include <fstream>
#include "Model/validscreenmodel.h"
#include "Model/switchablescreensmodel.h"

//Class responsable for parsing all the settings that the user / programmer will set
class ConfigParserController
{
public:
    ConfigParserController(std::string configFilePath);
    ValidScreenModel getValidScreenModel();
    SwitchableScreensModel getSwitchableScreenModel();
private:
    void parseConfigFile(std::string configFilePath);
    //these guys will get initialized by this controller
    ValidScreenModel validScreenModel;
    SwitchableScreensModel switchableScreenModel;
};

#endif // CONFIGPARSERCONTROLLER_H
