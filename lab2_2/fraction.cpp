#include "fraction.h"
#include <math.h>

Fraction::Fraction()
{
    fnumerator   = 1;
    fdenominator = 1;
    fcount += 1;
}

Fraction::Fraction(Fraction *frac)
{
    fnumerator   = frac->numerator();
    fdenominator = frac->denominator();
    fcount += 1;
}

Fraction::Fraction(int m, int n)
{
    fnumerator   = m;
    fdenominator = n;
    fcount += 1;
}

int Fraction::numerator()
{
    return fnumerator;
}

int Fraction::denominator()
{
    return fdenominator;
}

void Fraction::Reduce()
{
//    int len = (int)fmax(fnumerator, fdenominator);
//    int* ElementaryMul = new int[len];
//    for(int i = 0; i < len; ++i) ElementaryMul[i] = i+1;

//    ElementaryMul[0] = -1;
//    for(int i = 2; i <= len; i++)
//    {
//        if(ElementaryMul[i-1] != -1)
//            for(int j = 2*i; j <= len; j+= i)
//                ElementaryMul[j-1] = -1;
//    }

//    for(int i = (int)fmax(fnumerator, fdenominator); i > 1; i--)
//    {
//        if(ElementaryMul[i-1] != -1)
//            if((fnumerator % ElementaryMul[i-1] == 0) && (fdenominator % ElementaryMul[i-1] == 0))
//            {
//                fnumerator   /= ElementaryMul[i-1];
//                fdenominator /= ElementaryMul[i-1];
//                i = (int)fmax(fnumerator, fdenominator)+1;
//            }
//    }

//    delete[] ElementaryMul;
    int Great = gcd(fnumerator, fdenominator);
    fnumerator   /= Great;
    fdenominator /= Great;
}

int Fraction::gcd(int n, int m)
{
    n = abs(n);
    m = abs(m);

    while(n != 0 && m != 0)
    {
        if(n > m)
            n %= m;
        else
            m %= n;
    }
    return m+n;
}

void Fraction::printAsFraction(double decimal_fraction)
{
    int len = 0;
    while((decimal_fraction-trunc(decimal_fraction)) != 0)
    {
        decimal_fraction *= 10;
        ++len;
    }
    Fraction tmp((int)decimal_fraction, (int)pow(10, len));
    tmp.Reduce();
    std::cout << tmp;
}

void Fraction::printAsFraction(char *decimal_fraction)
{
    double tmp = 0;
    while(*decimal_fraction)
    {
        if(*decimal_fraction != '.')
            tmp = tmp*10 + (*decimal_fraction-0x30);
        else
            break;
        decimal_fraction++;
    }
    decimal_fraction++;
    int len = 0;
    while(*decimal_fraction)
    {
        tmp = tmp*10 + (*decimal_fraction-0x30);
        ++len;
        decimal_fraction++;
    }
    tmp = tmp / pow(10, len);
    printAsFraction(tmp);
}

void Fraction::ShowCount()
{
    std::cout << "Fractions created " << fcount << std::endl;
}

Fraction Fraction::operator *(Fraction& frac)
{
    Fraction Res(this->fnumerator*frac.numerator(),
                 this->fdenominator*frac.denominator());
    Res.Reduce();
    return Res;
}

Fraction Fraction::operator /(Fraction& frac)
{
    Fraction Res(this->fnumerator   * frac.denominator(),
                 this->fdenominator * frac.numerator());
    Res.Reduce();
    return Res;
}

Fraction Fraction::operator +(Fraction& frac)
{
    Fraction Res(this->fnumerator*frac.denominator()   + frac.numerator()*this->fdenominator,
                 this->fdenominator * frac.denominator());
    Res.Reduce();
    return Res;
}

Fraction Fraction::operator -(Fraction& frac)
{
    Fraction Res(this->fnumerator*frac.denominator()   - frac.numerator()*this->fdenominator,
                 this->fdenominator * frac.denominator());
    Res.Reduce();
    return Res;
}

Fraction::~Fraction()
{

}

std::ostream& operator << (std::ostream& out, Fraction frak)
{
    std::cout << frak.numerator() << '/' << frak.denominator() << std::endl;
    return out;
}

int Fraction::fcount = 0;
