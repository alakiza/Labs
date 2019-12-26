#include "deck.h"
#include <random>

Deck::Deck()
{
    //Заполнение карт

    for(int j = 0; j < 4; ++j)
        for(int i = 0; i <= 13; ++i)
            fCards.push_back(new Card(i+1, j));
    fPos = fCards.size()-1;

    //и их перемешивание
    this->Shuffle();
}

void Deck::Shuffle()
{
    //Перемешивание колоды
    //Карты на случайные позиции
    for(int i = 0; i < fCards.size(); ++i)
    {
        int newpos = rand()%52;

        Card* temp = fCards[i];
        fCards[i] = fCards[newpos];
        fCards[newpos] = temp;
    }
}

//
void Deck::Reset()
{
    //Указатель на верх колоды
    fPos = fCards.size()-1;
    //Перемешивание
    this->Shuffle();
}

Card* Deck::Pop()
{
    //Извлечение карты с верха колоды
    if(fPos < 0) throw exception();
    return fCards[fPos--];
}

Deck::~Deck()
{
    for(int i = 0; i < fCards.size(); ++i)
        delete fCards[i];
}
