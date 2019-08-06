#include "configparsercontroller.h"

ConfigParserController::ConfigParserController(std::string configFilePath, SwitchableScreensModel* model)
{
    switchableScreenModel = model;
    parseConfigFile(configFilePath);
}

void ConfigParserController::parseConfigFile(std::string configFilePath){
    std::ifstream file(configFilePath);

    if (file.fail()){std::cout << "ERROR: file failed to open!" << std::endl;}

    std::string screenName;
    std::string message;

    int widgetPosision = 0;

    //skipping over the first line of the file
    getline(file, screenName,',');
    getline(file, screenName, ',');
    getline(file, screenName, '\n');

    while(file.good()){
        std::string unformattedNum;
        //grabbing the contents from the file
        getline(file, screenName, ',');
        getline(file, message, ',');
        getline(file, unformattedNum, '\n');
        //simple check to see if we are looking at a number
        if (isdigit(unformattedNum[0])){
            widgetPosision = std::stoi(unformattedNum);
        }
        //adding screen to model
        switchableScreenModel->addSwithableScreen(screenName, message, widgetPosision);
    }
    file.close();
}


