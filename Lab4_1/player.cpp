#include "player.h"
#include <iostream>
using namespace std;

Player::Player()
{
    //инициализация
    cards.clear();
    money = 10000;
}

Player::~Player()
{

}

int Player::points()
{
    //Подсчёт очей
    int res = 0;
    for(int i = 0; i < cards.size(); ++i)
        res += cards[i]->getValue();
    return res;
}

int Player::SecondPoints()
{
    int res = 0;
    for(int i = 0; i < second.size(); ++i)
        res += second[i]->getValue();
    return res;
}

void Player::PrintCards()
{
    //Вывод на экран
    for(int i = 0; i < this->cards.size(); ++i)
    {
        cout << *cards[i] << " ";
    }
    cout << endl;
}

void Player::PrintSecond()
{
    for(int i = 0; i < this->second.size(); ++i)
    {
        cout << *second[i] << " ";
    }
    cout << endl;
}

void Player::Reset()
{
    splitted = false;
    second.clear();
    cards.clear();
}

void Player::Split()
{
    //Сплитуем , то есть последнюю карту передаём на вторую руку
    second.push_back(cards[cards.size()-1]);
    cards.pop_back();
}
