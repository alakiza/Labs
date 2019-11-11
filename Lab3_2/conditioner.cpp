#include "conditioner.h"
#include <iostream>
#include <fstream>

Conditioner::Conditioner() : HomeAppliance()
{
    fModel = "Conditioner";
}

Conditioner::Conditioner(const std::string model,
                         const std::string concern,
                         const int& Year,
                         const double& weight,
                         const Mode& mode,
                         const double& temperature,
                         const double& Power):HomeAppliance(concern, model, weight, temperature, mode, Power)
{

}

void Conditioner::Control(int Temperature)
{
    SetTemperature(Temperature);
    if(Temperature < 10)
    {
        std::cout << "Температура меньше 10! " << std::endl << "Выключение..." << std::endl;
    }
    else if(Temperature <20)
    {
        SetMode(Mode::cool);
        std::cout << "Охлаждение" << std::endl;
    }
    else if(Temperature < 30)
    {
        SetMode(Mode::dry);
        std::cout << "Просушка" << std::endl;
    }
    else
    {
        SetMode(Mode::heat);
        std::cout << "Нагрев" << std::endl;
    }
}


