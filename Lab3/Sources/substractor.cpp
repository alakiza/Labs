#include "substractor.h"

Substractor::Substractor()
{

}

double Substractor::Calculate()
{
    double res = fOperands[0];
    for(int i = 1; i < fCount; ++i)
    {
        res -= fOperands[i];
    }
    return res;
}

void Substractor::shuffle()
{
    qsort(fOperands, sizeof(double), fCount*sizeof(double), &Substractor::Comparator);
}

void Substractor::shuffle(size_t left, size_t right)
{
    if(trunc(left) == 0 || trunc(right) == 0)
    {
        double tmp = fOperands[left];
        fOperands[left] = fOperands[right];
        fOperands[right] = tmp;
    }
}
