#include <iostream>
#include "conditioner.h"

using namespace std;

int main()
{
    Conditioner* cond1 = new Conditioner("Кондиционер++", "Новая папка", 2020, 10.0, Mode::heat, 25.0);
    Conditioner* cond2 = new Conditioner("++Кондиционер", "Папка новая", 2200, 5.5, Mode::cool, 10.0);

    cond1->Serialize("Первый.дмп");
    cond2->Serialize("Second.dmp");
    cond1->DeSerialize("Second.dmp");
    cond2->DeSerialize("Первый.дмп");
    cond1->Serialize("First-Second.dmp");
    cond2->Serialize("Second-First.dmp");

    Conditioner cond3;
    cond3.SetMode(Mode::cool);
    cond3.SetTemperature(5);
    cond3.SetMode(Mode::heat);
    cond3.SetTemperature(30);

    cond1->SetMode(Mode::cool);
    cond1->SetTemperature(7);

    cond2->SetMode(Mode::dry);
    cond1->SetMode(Mode::dry);
    cond1->SetTemperature(20);

    cond1->PrintState();
    cond2->PrintState();
    cond3.PrintState();
    return 0;
}
