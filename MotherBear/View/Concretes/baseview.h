#ifndef BASEVIEW_H
#define BASEVIEW_H

#include "View/Abstracts/iscreenview.h"
#include <QMainWindow>
#include <QWidget>


class BaseView : public QMainWindow, public iScreenView
{
    Q_OBJECT
public:
    explicit BaseView(QWidget *parent = nullptr);
    ~BaseView() override;
    int getQStackedWidgetPosition() override;
    void setExternalController(iController *controller) override;
    void setQStackedWidgetPosition(int position) override;
private:
    iController *controllerRef;
    int qStackedWidgetPosition;
};

#endif // BASEVIEW_H
