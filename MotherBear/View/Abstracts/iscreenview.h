#ifndef ISCREENVIEW_H
#define ISCREENVIEW_H

#include "Controller/Abstracts/iscreencontroller.h"

class iScreenView
{
public:
    inline iScreenView(){}
    virtual~iScreenView(){}
    virtual int getQStackedWidgetPosition() = 0;
    virtual void setExternalController(iScreenController *controller) = 0;
    virtual void setQStackedWidgetPosition(int position) = 0;
private:
};

#endif // ISCREENVIEW_H
