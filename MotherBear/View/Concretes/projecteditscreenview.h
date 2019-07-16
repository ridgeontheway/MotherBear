#ifndef PROJECTEDITSCREENVIEW_H
#define PROJECTEDITSCREENVIEW_H

#include <QWidget>
#include "ui_ProjectEditScreen.h"
#include "Controller/Abstracts/icontroller.h"


namespace Ui {
class ProjectEditScreen;
}

class ProjectEditScreenView : public QWidget
{
    Q_OBJECT

public:
    explicit ProjectEditScreenView(QWidget *parent = nullptr, iController *ref = nullptr);
    ~ProjectEditScreenView();
private:
    Ui::ProjectEditScreen *ui;
    iController *controllerRef;
};

#endif // PROJECTEDITSCREENVIEW_H
