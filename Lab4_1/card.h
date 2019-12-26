#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <ostream>
using namespace std;

class Card //Класс карты
{
public:
    int Value; //Значение по порядку валет - 11, дама - 12, король - 13, туз 14
    int Color; //Масть

    ~Card();
    Card(int aValue, int aColor);

    friend ostream& operator << (ostream& out, const Card&);
    int getValue();
};

#endif // CARD_H
