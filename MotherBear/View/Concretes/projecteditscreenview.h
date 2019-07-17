#ifndef PROJECTEDITSCREENVIEW_H
#define PROJECTEDITSCREENVIEW_H

#include <QMainWindow>
#include "ui_projecteditscreen.h"
#include "Controller/Abstracts/icontroller.h"
#include "View/Abstracts/iscreenview.h"

namespace Ui {
class ProjectEditWindow;
}

class ProjectEditScreenView : public QMainWindow, public iScreenView
{
    Q_OBJECT

public:
    explicit ProjectEditScreenView(QWidget *parent = nullptr, iController *ref = nullptr);
    ~ProjectEditScreenView() override;
    int getQStackedWidgetPosition() override;
    void setUpScreens(); //TODO passed in an array of abstract views
private:
    Ui::ProjectEditWindow *ui;
    iController *controllerRef;
};

#endif // PROJECTEDITSCREENVIEW_H
