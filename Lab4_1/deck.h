#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <vector>
#include <exception>
using namespace std;

class Deck  //Класс колоды
{
private:
    int fPos; //Номер верхней карты
    vector<Card*> fCards; //Вектор карт(опять же, можно было массивом обойтись) (КОМПОЗИЦИЯ)
    void Shuffle(); //Перемешивание карт
public:
    Deck();
    void Reset(); //Сброс колоды до начального состояния(при новой игре)
    Card* Pop(); //Получение верхней карты
   ~Deck();
};

#endif // DECK_H
