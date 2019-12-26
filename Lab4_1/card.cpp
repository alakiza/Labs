#include "card.h"

const string images[] = {"\u2665", "\u2666", "\u2663", "\u2660"};

Card::Card(int aValue, int aColor)
{
    Value = aValue;
    Color = aColor;
}

int Card::getValue()
{
    //Если картинка - 10 очей
    //Если цифры - цифры
    //Если туз - 11
    if(this->Value < 11)
        return this->Value;
    else if(this->Value < 14)
        return 10;
    else
        return 11;
}

Card::~Card()
{

}

ostream& operator << (ostream& out, const Card& card)
{
    //Оператор вывода
    //Если цифры - вывод , иначе соответственно
    if(card.Value < 11)
    {
        out << card.Value << images[card.Color];
    }
    else
        switch(card.Value)
        {
        case 11:
            out << "J" << images[card.Color];
            break;
        case 12:
            out << "Q" << images[card.Color];
            break;
        case 13:
            out << "K" << images[card.Color];
            break;
        case 14:
            out << "A" << images[card.Color];
            break;
        }
}
