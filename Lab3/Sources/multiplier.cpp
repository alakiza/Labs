#include "multiplier.h"

Multiplier::Multiplier()
{

}

Multiplier::Multiplier(int ElemCount) : ExpressionEvaluator(ElemCount)
{

}

void Multiplier::LogToFile(const std::string &FileName)
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

void Multiplier::LogToScreen()
{
    fOperands[0] > 0 ?
                std::cout << fOperands[0]
              :
                std::cout << '(' << fOperands[0] << ')';

    for(int i = 1; i < fCount; ++i)
    {
        std::cout << " * ";
        (fOperands[i] > 0) ? std::cout << fOperands[i] : std::cout << '(' << fOperands[i] << ')';
    }

    std::cout << " Total < " << fCount << " >" << std::endl;
    std::cout << "Result < " << this->Calculate() << " >" << std::endl;
}

double Multiplier::Calculate()
{
    double res = fOperands[0];
    for(int i = 1; i < fCount; ++i)
    {
        res *= fOperands[i];
    }
    return res;
}
