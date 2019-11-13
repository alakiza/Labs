#include <iostream>
#include "conditioner.h"
#include "heatingdevice.h"

using namespace std;

int main()
{
    HomeAppliance* cond1 = new Conditioner();
    HomeAppliance* heat = new HeatingDevice();
    cond1->Control(0);
    heat->Control(100);

    HomeAppliance* tmp = cond1;
    cond1 = heat;
    heat = tmp;

    cond1->Control(120);
    heat->Control(0);

    delete cond1;
    delete heat;

    return 0;
}
