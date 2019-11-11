#ifndef SUBSTRACTOR_H
#define SUBSTRACTOR_H
#include "expressionevaluator.h"

class Substractor : public ExpressionEvaluator, public IShuffle
{
public:
    Substractor();
    double Calculate();

    void shuffle();
    void shuffle(size_t left, size_t right);
private:
    static int Comparator(const void* a, const void* b)
    {
        if(*(double*)a < *(double*)b) return -1;
        if(*(double*)a == *(double*)b) return 0;
        if(*(double*)a > *(double*)b) return 1;
    }
};

#endif // SUBSTRACTOR_H
