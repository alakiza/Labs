#include "summator.h"

Summator::Summator()
{

}

double Summator::Calculate()
{
    double res = fOperands[0];
    for(int i = 1; i < fCount; ++i)
    {
        res -= fOperands[i];
    }
    return res;
}
