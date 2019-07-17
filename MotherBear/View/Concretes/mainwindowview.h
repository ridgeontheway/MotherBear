#ifndef WELCOMESCREENVIEW_H
#define WELCOMESCREENVIEW_H

#include <QMainWindow>
#include "ui_MainWindowScreen.h"
#include "Controller/Abstracts/icontroller.h"
#include "View/Abstracts/iscreenview.h"

namespace Ui {
class MainWindow;
}


class MainWindowView : public QMainWindow, public iScreenView
{
    Q_OBJECT

public:
    explicit MainWindowView(QWidget *parent = nullptr, iController *ref = nullptr);
    ~MainWindowView() override;
    int getQStackedWidgetPosition() override;
private slots:
    void on_editProjectButton_clicked();

    void on_newProjectButton_clicked();

    void on_settingsButton_clicked();

private:
    Ui::MainWindow *ui;
    iController *controllerRef;
    int qStackedWidgetPosition  = 1;
};

#endif // WELCOMESCREENVIEW_H
