#ifndef APPLICATIONCONTROLLER_H
#define APPLICATIONCONTROLLER_H

#include <QStackedWidget>
#include <map>
#include <QWidget>
#include <vector>

class MainWindowScreenController
{
public:
    MainWindowScreenController(std::vector<QWidget> *applicationPages);
    QStackedWidget* getApplicationPagesRef();

private:
    QStackedWidget _applicationPages;
    std::map<const char*, int> _applicationPagesLookUp;
};

#endif // APPLICATIONCONTROLLER_H
