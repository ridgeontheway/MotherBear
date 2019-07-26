#ifndef PROJECTEDITSCREENVIEW_H
#define PROJECTEDITSCREENVIEW_H

#include <QMainWindow>
#include "ui_projecteditscreen.h"
#include "View/Concretes/baseview.h"
#include "Controller/Abstracts/icontroller.h"
#include "View/Abstracts/iscreenview.h"

namespace Ui {
class ProjectEditWindow;
}

class ProjectEditScreenView : public BaseView
{
    Q_OBJECT
public:
    explicit ProjectEditScreenView(QWidget *parent = nullptr);
    ~ProjectEditScreenView() override;
private:
    Ui::ProjectEditWindow *ui;
    iController *controllerRef;
    int qStackedWidgetPosition;
};

#endif // PROJECTEDITSCREENVIEW_H
