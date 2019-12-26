#include "dealer.h"

Dealer::Dealer()
{
    for(int i = 0; i<4; ++i)
        fDecs.push_back(new Deck()); //Создание колод
}

Card *Dealer::GetCard()
{
    //выдача карты с очередной колоды
    if(currentDeck >= fDecs.size())
        currentDeck = 0;
    return fDecs[currentDeck++]->Pop();
}

void Dealer::Reset()
{
    //Очищение карт на руках
    //Сброс колод
    cards.clear();
    for(int i = 0; i < fDecs.size(); ++i)
    {
        fDecs[i]->Reset();
    }
}

Dealer::~Dealer()
{

}
