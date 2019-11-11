#ifndef ICONTROLLABLE_H
#define ICONTROLLABLE_H

class IControllable
{
public:
    virtual void Control(int temperature) = 0;
};

#endif // ICONTROLLABLE_H
