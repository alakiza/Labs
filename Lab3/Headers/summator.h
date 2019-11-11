#ifndef SUMMATOR_H
#define SUMMATOR_H
#include "expressionevaluator.h"

class Summator : public ExpressionEvaluator
{
public:
    Summator();
    double Calculate();
};

#endif // SUMMATOR_H
