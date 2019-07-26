#ifndef ISCREENVIEW_H
#define ISCREENVIEW_H

#include <QMainWindow>
#include "Controller/Abstracts/icontroller.h"

class iScreenView
{
public:
    inline iScreenView(){}
    virtual~iScreenView(){}
    virtual int getQStackedWidgetPosition() = 0;
    virtual void setExternalController(iController *controller) = 0;
    virtual void setQStackedWidgetPosition(int position) = 0;
private:
};

#endif // ISCREENVIEW_H
