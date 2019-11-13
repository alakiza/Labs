#include "homeappliance.h"
#include <iostream>
#include <fstream>

HomeAppliance::HomeAppliance()
{
    fConcern = "unititled";
    fModel = "something shit";
    fWeight = 300;
    SetTemperature(0);
}

HomeAppliance::HomeAppliance(std::string Concern,
                             std::string Model,
                             int Year,
                             double Weight,
                             double Temperature,
                             Mode mode,
                             double Power)
{
    fConcern = Concern;
    fModel = Model;
    fYear = Year;
    fWeight = Weight;
    SetTemperature(Temperature);
    fMode = mode;
    fPower = Power;
}

std::string HomeAppliance::GetFileName()
{
    return "."+std::to_string((long long)this) + "dmp";
}

void HomeAppliance::Serialize()
{
    std::string filename = "."+std::to_string((long long)this) + "dmp";
    Serialize(&filename);
}

void HomeAppliance::DeSerialize()
{
    std::string filename = "."+std::to_string((long long)this) + "dmp";
    DeSerialize(&filename);
}

void HomeAppliance::Serialize(const std::string *filename)
{
    std::ofstream fout;
    fout.open(*filename, std::ios_base::binary|std::ios_base::trunc);

    ulong size = fModel.length();
    fout.write((char*)&size, sizeof(size));
    fout << fModel;

    size = fConcern.length();
    fout.write((char*)&size, sizeof(size));
    fout << fConcern;

    fout.write((char*)&fYear, sizeof(fYear));
    fout.write((char*)&fWeight, sizeof(fWeight));
    fout.write((char*)&fTemperature, sizeof(fTemperature));

    fout.close();
}

void HomeAppliance::DeSerialize(const std::string *filename)
{
    std::ifstream fin;
    fin.open(*filename, std::ios_base::binary|std::ios_base::in);
    ulong Size = 0;
    fin.read((char*)&Size, sizeof(Size));
    char* tmp = new char[Size+1];
    tmp[Size] = 0;
    fin.read(tmp, Size);
    fModel = tmp;
    delete[] tmp;

    fin.read((char*)&Size, sizeof(Size));
    tmp = new char[Size+1];
    tmp[Size] = 0;
    fin.read(tmp, Size);
    fConcern = tmp;
    delete[] tmp;

    fin.read((char*)&fYear, sizeof(fYear));
    fin.read((char*)&fWeight, sizeof(fWeight));
    fin.read((char*)&fTemperature, sizeof(fTemperature));

    fin.close();
}

void HomeAppliance::Serialize(const std::string filename)
{
    Serialize(&filename);
}

void HomeAppliance::DeSerialize(const std::string filename)
{
    DeSerialize(&filename);
}

std::ostream& operator << (std::ostream& out, Mode& mode)
{
    switch(mode)
    {
    case Mode::cool:
        out << "Охлаждение";
        break;
    case Mode::heat:
        out << "Нагрев";
        break;
    case Mode::dry:
        out << "Просушка";
        break;
    case Mode::fan:
        out << "Продувка";
        break;
    }
    return out;
}

void HomeAppliance::PrintState()
{
    using namespace std;
    cout << "Модель :" << fModel << endl
         << "Производитель : " << fConcern << endl
         << "Год : " << fYear << endl
         << "Вес : " << fWeight << endl
         << "Режим : " << fMode << endl
         << "Температура : " << fTemperature << endl
         << endl
         << "Средняя температура : " << fTotalTemperature/fCount << endl;
}

HomeAppliance::~HomeAppliance()
{

}
