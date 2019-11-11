#ifndef MULTIPLIER_H
#define MULTIPLIER_H
#include "expressionevaluator.h"

class Multiplier : public ExpressionEvaluator
{
public:
    Multiplier();
    Multiplier(int ElemCount);

    void LogToFile(const std::string& FileName);
    void LogToScreen();

    double Calculate();
};

#endif // MULTIPLIER_H
