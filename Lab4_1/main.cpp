#include <iostream>
#include <random>
#include <time.h>
#include "game.h"
using namespace std;

int main()
{
    //Рандомизируем генератор случайных чисел
    srand(time(0));
    //Создаём объект игры
    Game* game = new Game();
    //Запуск игры
    game->Run();
    //Удаление игры
    delete game;
    return 0;
}
