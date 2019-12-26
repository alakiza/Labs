#ifndef GAME_H
#define GAME_H
#include "deck.h"
#include "dealer.h"
#include "player.h"
#include <string>

using namespace std;

class Game //Класс игры
{
private:
    Dealer* fDealer; //Дилер
    Player* fPlayer; //Игрок
    bool FirstHand = true; //Левая рука ли?

    bool FirstHandLose = false; //Проиграла ли левая рука?
public:
    Game();
    void more();//Метод получения ещё одной карты
    void Run(); //Главный цикл игры
    ~Game();
    void Reset(); //Сброс состояния
    void FirstMore(); //Первая раздача
    void moreYourself(); //раздача карты дилеру
    void PrintStat(); //Печать состояния игры
};

#endif // GAME_H
