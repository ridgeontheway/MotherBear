#ifndef WELCOMESCREENVIEW_H
#define WELCOMESCREENVIEW_H

#include <QMainWindow>
#include "ui_MainWindowScreen.h"
#include "Controller/Abstracts/icontroller.h"


namespace Ui {
class MainWindow;
}


class MainWindowView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowView(QWidget *parent = nullptr, iController *ref = nullptr);
    ~MainWindowView();
private slots:
    void on_NewProjectButton_clicked();

    void on_LoadProjectButton_clicked();

    void on_SettingsButton_clicked();

private:
    Ui::MainWindow *ui;
    iController *controllerRef;
};

#endif // WELCOMESCREENVIEW_H
