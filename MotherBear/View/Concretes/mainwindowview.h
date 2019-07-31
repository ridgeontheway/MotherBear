#ifndef WELCOMESCREENVIEW_H
#define WELCOMESCREENVIEW_H

#include <QMainWindow>
#include <QWidget>
#include "ui_MainWindowScreen.h"
#include "Controller/Abstracts/iscreencontroller.h"
#include "View/Abstracts/iscreenview.h"
#include "View/Concretes/baseview.h"
#include "Model/viewsignalmodel.h"

namespace Ui {
class MainWindow;
}


class MainWindowView : public BaseView
{
    Q_OBJECT
public:
    explicit MainWindowView(QWidget *parent = nullptr);
    ~MainWindowView() override;
    void setSignalModel(ViewSignalModel* model);
    void pushQStackedWidgetPosition(BaseView *newScreen);
    void insertQStackedWidget(BaseView *newScreen, int pos);
private slots:
    void on_editProjectButton_clicked();

    void on_newProjectButton_clicked();

    void on_settingsButton_clicked();

private:
    Ui::MainWindow* ui;
    ViewSignalModel* signalModel;
    iScreenController *controllerRef;
    int qStackedWidgetPosition;
};

#endif // WELCOMESCREENVIEW_H
