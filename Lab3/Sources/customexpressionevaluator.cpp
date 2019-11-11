#include "customexpressionevaluator.h"

CustomExpressionEvaluator::CustomExpressionEvaluator()
{

}

CustomExpressionEvaluator::CustomExpressionEvaluator(double* Operands, int ElemCount) : ExpressionEvaluator(ElemCount)
{
    setOperands(Operands, ElemCount);
}

double CustomExpressionEvaluator::Calculate()
{
    double res = fOperands[0];
    for(int i = 1; i < fCount; i+=2) res += fOperands[i]*fOperands[i+1];
    return res;
}

void CustomExpressionEvaluator::LogToFile(const std::string& FileName)
{
    std::ofstream fout;
    fout.open(FileName, std::ios_base::app);

    fOperands[0] > 0 ?
                fout << fOperands[0]
              :
                fout << '(' << fOperands[0] << ')';

    for(int i = 1; i < fCount; ++i)
    {
        fout << " + ";
        (fOperands[i] > 0) && (i < fCount) ? fout << fOperands[i] : fout << '(' << fOperands[i] << ')';
        ++i;
        fout << " * ";
        (fOperands[i] > 0) && (i < fCount) ? fout << fOperands[i] : fout << '(' << fOperands[i] << ')';
    }

    fout << " Total < " << fCount << " >" << std::endl;
    fout << "Result < " << this->Calculate() << " >" << std::endl;

    fout.close();
}

void CustomExpressionEvaluator::LogToScreen()
{
    fOperands[0] > 0 ?
                std::cout << fOperands[0]
              :
                std::cout << '(' << fOperands[0] << ')';

    for(int i = 1; i < fCount; ++i)
    {
        std::cout << " + ";
        (fOperands[i] > 0) && (i < fCount) ? std::cout << fOperands[i] : std::cout << '(' << fOperands[i] << ')';
        ++i;
        std::cout << " * ";
        (fOperands[i] > 0) && (i < fCount) ? std::cout << fOperands[i] : std::cout << '(' << fOperands[i] << ')';
    }

    std::cout << " Total < " << fCount << " >" << std::endl;
    std::cout << "Result < " << this->Calculate() << " >" << std::endl;
}

void CustomExpressionEvaluator::shuffle()
{
    qsort(fOperands, fCount, sizeof(double), &CustomExpressionEvaluator::Comparator);
}

void CustomExpressionEvaluator::shuffle(size_t left, size_t right)
{
    if(trunc(left) == 0 || trunc(right) == 0)
    {
        double tmp = fOperands[left];
        fOperands[left] = fOperands[right];
        fOperands[right] = tmp;
    }
}

CustomExpressionEvaluator::~CustomExpressionEvaluator()
{

}


