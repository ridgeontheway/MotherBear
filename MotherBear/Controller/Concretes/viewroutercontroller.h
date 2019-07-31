#ifndef VIEWROUTERCONTROLLER_H
#define VIEWROUTERCONTROLLER_H

#include "Model/switchablescreensmodel.h"
#include "View/Concretes/baseview.h"
#include <vector>

class ViewRouterController
{
public:
    ViewRouterController(BaseView mainWindowView);
    BaseView getRelevant
private:
    SwitchableScreensModel model;
};

#endif // VIEWROUTERCONTROLLER_H
