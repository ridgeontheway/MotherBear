#ifndef ICONTROLLER_H
#define ICONTROLLER_H

class iScreenController
{
public:
    inline iScreenController(){}
    virtual ~iScreenController(){}
    virtual void processButtonPress(const char* message) = 0;
private:
};

#endif // ICONTROLLER_H
