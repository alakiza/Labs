#ifndef DEALER_H
#define DEALER_H
#include "player.h"
#include <deck.h>
#include <card.h>

class Dealer: public Player //Класс дилера
{
private:
    vector<Deck*> fDecs; //вектор колод(здесь мог быть тем же массивом) (КОМПОЗИЦИЯ)
    int currentDeck = 0; //Текущая колода
public:
    Dealer();
    virtual ~Dealer();
    void Reset(); //Сброс состояния
    Card *GetCard(); //Метод выдачи карты
};

#endif // DEALER_H
