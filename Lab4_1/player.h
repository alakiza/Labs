#ifndef PLAYER_H
#define PLAYER_H
#include "card.h"
#include <vector>
using namespace std;

class Player //Класс игрока
{
public:
    vector<Card*> cards; //Карты на левой руке (АГРЕГИРОВАНИЕ КАРТ)
    vector<Card*> second; //Карты на правой руке(если сплит)(АГРЕГИРОВАНИЕ КАРТ)
    int money; //Дэньги
    bool splitted; //Сплитанули ли?
    Player();

    virtual ~Player();
    int points(); //подсчёт очков
    void PrintCards(); //Вывод карт на экран
    void Split(); //Сплитим
    void Reset(); //Сброс
    void PrintSecond();//Вывод карты на правой руке
    int SecondPoints(); //Подсчёт очков на правой руке
};

#endif // PLAYER_H
