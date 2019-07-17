#ifndef ISCREENVIEW_H
#define ISCREENVIEW_H


class iScreenView
{
public:
    inline iScreenView(){}
    virtual~iScreenView(){}
    virtual int getQStackedWidgetPosition() = 0;
private:
};

#endif // ISCREENVIEW_H
