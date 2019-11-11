#ifndef CUSTOMEXPRESSIONEVALUATOR_H
#define CUSTOMEXPRESSIONEVALUATOR_H
#include "expressionevaluator.h"

class CustomExpressionEvaluator : public ExpressionEvaluator, public IShuffle
{
public:
    CustomExpressionEvaluator();
    CustomExpressionEvaluator(double *Operands, int ElemCount);

    void LogToFile(const std::string& FileName);
    void LogToScreen();

    void shuffle();
    void shuffle(size_t left, size_t right);

    double Calculate();

    ~CustomExpressionEvaluator();
private:
    static int Comparator(const void* a, const void* b)
    {
        if(*(double*)a < *(double*)b) return -1;
        if(*(double*)a == *(double*)b) return 0;
        if(*(double*)a > *(double*)b) return 1;
    }
};

#endif // CUSTOMEXPRESSIONEVALUATOR_H
