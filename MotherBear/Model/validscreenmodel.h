#ifndef VALIDSCREENMODEL_H
#define VALIDSCREENMODEL_H

#include <map>
#include <string>

class ValidScreenModel
{
public:
    inline ValidScreenModel(){}
    bool isValidScreen(std::string screenName);
    void setValidScreen(std::string screenName);
private:
    std::map<std::string, bool> map;
};

#endif // VALIDSCREENMODEL_H
