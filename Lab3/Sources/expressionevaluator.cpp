#include "expressionevaluator.h"

ExpressionEvaluator::ExpressionEvaluator()
{
    fCount = 20;
    fOperands = new double[fCount];
    for(int i = 0; i < fCount; ++i) fOperands[i] = 0;
}

ExpressionEvaluator::ExpressionEvaluator(int ElemCount)
{
    fCount = ElemCount;
    fOperands = new double[fCount];
    for(int i = 0; i < fCount; ++i) fOperands[i] = 0;
}

void ExpressionEvaluator::setOperand(size_t pos, double value)
{
    fOperands[pos] = value;
}

void ExpressionEvaluator::setOperands(double operands[], size_t Number)
{
    delete[] fOperands;
    fOperands = new double[Number];
    fCount = Number;
    for(int i = 0; i < Number; ++i) fOperands[i] = operands[i];
}

ExpressionEvaluator::~ExpressionEvaluator()
{
    delete[] fOperands;
}
