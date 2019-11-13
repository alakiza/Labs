#ifndef HOMEAPPLIANCE_H
#define HOMEAPPLIANCE_H
#include "icontrollable.h"
#include <string>

enum struct Mode
{
    cool = 0,
    heat = 1,
    dry = 2,
    fan = 3
};

class HomeAppliance : public IControllable
{
protected:
    double fTotalTemperature = 0;
    int fCount = 0;

    std::string fConcern;
    std::string fModel;
    double fWeight;
    double fTemperature;
    int fYear;
    Mode fMode;
    double fPower;
public:
    HomeAppliance();
    HomeAppliance(std::string Concern,
                  std::string Model,
                  int Year,
                  double Weight,
                  double Temperature,
                  Mode mode,
                  double Power);
    virtual void Control(int temperature) = 0;

    std::string GetFileName();

    void Serialize();
    void DeSerialize();

    void Serialize(const std::string* filename);
    void DeSerialize(const std::string* filename);

    void Serialize(const std::string filename);
    void DeSerialize(const std::string filename);

    void PrintState();

//================================================
    void SetConcern(const std::string& concern)
    {
        fConcern = concern;
    }
    void SetModel(const std::string& model)
    {
        fModel = model;
    }
    void SetWeight(const double weight)
    {
        fWeight = weight;
    }
    void SetTemperature(const double temperature)
    {
        fTemperature = temperature;
        fTotalTemperature += fTemperature;
        ++fCount;
    }
    void SetMode(const Mode mode)
    {
        fMode = mode;
    }
    void SetYear(const int year)
    {
        fYear = year;
    }
//=================================
    std::string GetConcern()
    {
        return fConcern;
    }
    std::string GetModel()
    {
        return fModel;
    }
    double GetWeight()
    {
        return fWeight;
    }
    double GetTemperature()
    {
        return fTemperature;
    }
    Mode GetMode()
    {
        return fMode;
    }
    int GetYear()
    {
        return fYear;
    }

    virtual ~HomeAppliance();

};

#endif // HOMEAPPLIANCE_H
