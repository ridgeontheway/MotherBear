#ifndef PROJECTEDITSCREENVIEW_H
#define PROJECTEDITSCREENVIEW_H

#include <QMainWindow>
#include "Controller/Abstracts/icontroller.h"

namespace Ui {
class MainWindow;
}

class ProjectEditScreenView : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProjectEditScreenView(QWidget *parent = nullptr, iController *ref = nullptr);
    ~ProjectEditScreenView();
private:
    Ui::MainWindow *ui;
    iController *controllerRef;
};

#endif // PROJECTEDITSCREENVIEW_H
