#ifndef ICONTROLLER_H
#define ICONTROLLER_H

class iController
{
public:
    inline iController(){}
    virtual ~iController(){}
    virtual void processButtonPress(const char* message) = 0;
private:
};

#endif // ICONTROLLER_H
