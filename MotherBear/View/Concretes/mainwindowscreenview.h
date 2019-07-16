#ifndef WELCOMESCREENVIEW_H
#define WELCOMESCREENVIEW_H

#include <QMainWindow>
#include "ui_MainWindow.h"
#include "Controller/Abstracts/icontroller.h"
#include "Controller/Concretes/applicationcontroller.h"
#include "Controller/Concretes/applicationcontroller.h"

namespace Ui {
class MainWindow;
}


class MainWindowScreenView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowScreenView(QWidget *parent = nullptr, iController *ref = nullptr);
    void editTemp(MainWindowScreenController *temp);
    ~MainWindowScreenView();
private slots:
    void on_NewProjectButton_clicked();

    void on_LoadProjectButton_clicked();

    void on_SettingsButton_clicked();

private:
    Ui::MainWindow *ui;
    iController *controllerRef;
    MainWindowScreenController *pagesControllerRef;
};

#endif // WELCOMESCREENVIEW_H
