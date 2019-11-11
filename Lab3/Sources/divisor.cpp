#include "divisor.h"

Divisor::Divisor()
{

}

Divisor::Divisor(int ElemCount) : ExpressionEvaluator(ElemCount)
{

}

double Divisor::Calculate()
{
    double res = fOperands[0];
    for(int i = 1; i < fCount; ++i)
    {
        res /= fOperands[i];
    }
    return res;
}

void Divisor::LogToFile(const std::string &FileName)
{
    std::ofstream fout;
    fout.open(FileName, std::ios_base::app);

    fOperands[0] > 0 ?
                fout << fOperands[0]
              :
                fout << '(' << fOperands[0] << ')';

    for(int i = 1; i < fCount; ++i)
    {
        fout << " * ";
        (fOperands[i] > 0) ? fout << fOperands[i] : fout << '(' << fOperands[i] << ')';
    }

    fout << " Total < " << fCount << " >" << std::endl;
    fout << "Result < " << this->Calculate() << " >" << std::endl;

    fout.close();
}

void Divisor::LogToScreen()
{
    fOperands[0] > 0 ?
                std::cout << fOperands[0]
              :
                std::cout << '(' << fOperands[0] << ')';

    for(int i = 1; i < fCount; ++i)
    {
        std::cout << " / ";
        (fOperands[i] > 0) ? std::cout << fOperands[i] : std::cout << '(' << fOperands[i] << ')';
    }

    std::cout << " Total < " << fCount << " >" << std::endl;
    std::cout << "Result < " << this->Calculate() << " >" << std::endl;
}

void Divisor::shuffle()
{
    qsort(fOperands, fCount, sizeof(double), &Divisor::Comparator);
}

void Divisor::shuffle(size_t left, size_t right)
{
    if(trunc(left) == 0 || trunc(right) == 0)
    {
        double tmp = fOperands[left];
        fOperands[left] = fOperands[right];
        fOperands[right] = tmp;
    }
}
