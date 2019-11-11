#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

class Fraction
{
private:
    int fnumerator;
    int fdenominator;


public:
    Fraction();
    Fraction(Fraction* frac);
    Fraction(int m, int n);

    int numerator();
    int denominator();

    void Reduce();

    static int gcd(int n, int m);
    static void printAsFraction(double decimal_fraction);
    static void printAsFraction(char* decimal_fraction);

    static int fcount;
    static void ShowCount();

    Fraction operator *(Fraction& frac);
    Fraction operator /(Fraction& frac);
    Fraction operator +(Fraction& frac);
    Fraction operator -(Fraction& frac);

    ~Fraction();
};

std::ostream& operator << (std::ostream& out, Fraction frak);

#endif // FRACTION_H
