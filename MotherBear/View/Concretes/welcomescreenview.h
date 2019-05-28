#ifndef WELCOMESCREENVIEW_H
#define WELCOMESCREENVIEW_H

#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class WelcomeScreenView : public QMainWindow
{
    Q_OBJECT

public:
    explicit WelcomeScreenView(QWidget *parent = nullptr);
    ~WelcomeScreenView();
    void setController();
private:
    Ui::MainWindow *ui;
    //todo need to add the header file to represent the interace
};

#endif // WELCOMESCREENVIEW_H
