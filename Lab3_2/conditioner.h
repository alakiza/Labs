#ifndef CONDITIONER_H
#define CONDITIONER_H
#include <iostream>
#include "homeappliance.h"

class Conditioner : public HomeAppliance
{
public:
    Conditioner();
    Conditioner(const std::string model,
                const std::string concern,
                const int& Year,
                const double& weight,
                const Mode& mode,
                const double& temperature,
                const double& Power);

    void Control(int Temperature);
    virtual ~Conditioner();
};

std::ostream& operator << (std::ostream& out, Mode& mode);

#endif // CONDITIONER_H
