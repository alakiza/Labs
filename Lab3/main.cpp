#include <iostream>

#include "multiplier.h"
#include "divisor.h"
#include "summator.h"
#include "substractor.h"
#include "customexpressionevaluator.h"

using namespace std;

int main()
{
    double* Operands = new double[5] {5, 16, -3, 10, 12};
    CustomExpressionEvaluator custom(Operands, 5);
    custom.LogToScreen();
    custom.LogToFile("Log.txt");

    custom.shuffle();
    custom.LogToScreen();
    custom.LogToFile("Log.txt");

    double* Operandss = new double[4] {150, -3, 10, -2.5};
    Divisor divisor(4);
    for(int i = 0; i < 4; ++i) divisor.setOperand(i, Operandss[i]);
    divisor.LogToScreen();
    divisor.LogToFile("Log.txt");

    divisor.shuffle();
    divisor.LogToScreen();
    divisor.LogToFile("Log.txt");


    double* Operandsss = new double[5] {1.5, 4, -2.5, -8, -15};
    Multiplier multiplier(5);
    multiplier.setOperands(Operandsss, 5);
    multiplier.LogToScreen();
    multiplier.LogToFile("Log.txt");

    delete[] Operandsss;
    delete[] Operandss;
    delete[] Operands;
}
