#include <iostream>
#include  "fraction.h"

using namespace std;

int main()
{
    Fraction a(5, 10);
    Fraction b(3, 5);
    Fraction c(2, 7);

    Fraction d = a-b;
    cout << a << b << c << d << a*b << b/c << a+c << endl;
    a.Reduce();
    b.Reduce();
    c.Reduce();
    cout << a << b << c << d << a*b << b/c << a+c << endl;

    Fraction::printAsFraction(0.25);
    Fraction::printAsFraction(0.43);
    Fraction::printAsFraction("0.25");
    Fraction::printAsFraction("0.45");
    Fraction::printAsFraction("0.43");

    Fraction::ShowCount();
    return 0;
}
