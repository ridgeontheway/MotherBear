#ifndef WELCOMESCREENVIEW_H
#define WELCOMESCREENVIEW_H

#include <QMainWindow>
#include "ui_WelcomeScreen.h"
#include "Controller/Abstracts/icontroller.h"


namespace Ui {
class MainWindow;
}


class WelcomeScreenView : public QMainWindow
{
    Q_OBJECT

public:
    explicit WelcomeScreenView(QWidget *parent = nullptr, iController *ref = nullptr);
    ~WelcomeScreenView();
private slots:
    void on_NewProjectButton_clicked();

    void on_LoadProjectButton_clicked();

    void on_SettingsButton_clicked();

private:
    Ui::MainWindow *ui;
    iController *controllerRef;
};

#endif // WELCOMESCREENVIEW_H
