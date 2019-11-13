#include "heatingdevice.h"
#include <iostream>

HeatingDevice::HeatingDevice() : HomeAppliance()
{
    fModel = "HeatingDevice";
}

HeatingDevice::HeatingDevice(const std::string model,
                             const std::string concern,
                             const int &Year,
                             const double &weight,
                             const Mode &mode,
                             const double &temperature,
                             const double& Power):HomeAppliance(concern, model, Year, weight, temperature, mode, Power)
{

}

void HeatingDevice::Control(int Temperature)
{
    SetTemperature(Temperature);
    if(Temperature > 45)
    {
        std::cout << "Температура больше 45" << std::endl << "Выключаем..." << std::endl;
    }
    else if(Temperature > 30)
    {
        SetMode(Mode::heat);
        std::cout << "Обогрев" << std::endl;
    }
    else if(Temperature > 20)
    {
        SetMode(Mode::dry);
        std::cout << "Просушка" << std::endl;
    }
    else
    {
        SetMode(Mode::cool);
        std::cout << "Охлаждение" << std::endl;
    }
}

HeatingDevice::~HeatingDevice()
{

}
