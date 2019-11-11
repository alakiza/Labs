#ifndef DIVISOR_H
#define DIVISOR_H
#include "expressionevaluator.h"

class Divisor : public ExpressionEvaluator, public IShuffle
{
public:
    Divisor();
    Divisor(int ElemCount);
    double Calculate();

    void LogToFile(const std::string& FileName);
    void LogToScreen();

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

#endif // DIVISOR_H
