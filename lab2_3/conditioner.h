#ifndef CONDITIONER_H
#define CONDITIONER_H
#include <iostream>

enum struct Mode
{
    cool = 0,
    heat = 1,
    dry = 2,
    fan = 3
};

class Conditioner
{
private:
    double fTotalTemperature = 0;
    int fCount = 0;

    std::string fConcern;
    std::string fModel;
    double fWeight;
    double fTemperature;
    Mode fMode;
    int fYear;
public:
    Conditioner();
    Conditioner(const std::string model,
                const std::string concern,
                const int& Year,
                const double& weight,
                const Mode& mode,
                const double& temperature);

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
};

std::ostream& operator << (std::ostream& out, Mode& mode);

#endif // CONDITIONER_H
