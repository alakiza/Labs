#ifndef HEATINGDEVICE_H
#define HEATINGDEVICE_H
#include "homeappliance.h"

class HeatingDevice : public HomeAppliance
{
public:
    HeatingDevice();
    HeatingDevice(const std::string model,
                  const std::string concern,
                  const int& Year,
                  const double& weight,
                  const Mode& mode,
                  const double& temperature,
                  const double& Power);

    void Control(int Temperature);
    virtual ~HeatingDevice();
};

#endif // HEATINGDEVICE_H
