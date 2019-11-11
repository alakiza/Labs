#ifndef EXPRESSIONEVALUATOR_H
#define EXPRESSIONEVALUATOR_H
#include "iloggable.h"
#include "ishuffle.h"
#include <math.h>

class ExpressionEvaluator : public ILoggable
{
public:
    double* fOperands;
    int fCount;

    virtual void LogToFile(const std::string& FileName) = 0;
    virtual void LogToScreen() = 0;

    ExpressionEvaluator();
    ExpressionEvaluator(int ElemCount);

    void setOperand(size_t pos, double value);
    void setOperands(double operands[], size_t Number);

    virtual double Calculate() = 0;

    virtual ~ExpressionEvaluator();
};

#endif // EXPRESSIONEVALUATOR_H
