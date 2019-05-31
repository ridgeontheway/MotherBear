#ifndef WELCOMESCREENVIEW_H
#define WELCOMESCREENVIEW_H

#include <QMainWindow>
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
    void setController();
private slots:
    void on_pushButton_3_clicked();

    void on_NewProjectButton_clicked();

private:
    Ui::MainWindow *ui;
    iController *controllerRef;
};

#endif // WELCOMESCREENVIEW_H
