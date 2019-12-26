#include "game.h"
#include <iostream>
#include <exception>

Game::Game()
{
    fDealer = new Dealer();
    fPlayer = new Player();
}

void Game::FirstMore()
{
    //Дилеру 1 карту, игроку 2 карты
    Card* card = fDealer->GetCard();
    fDealer->cards.push_back(card);

    card = fDealer->GetCard();
    fPlayer->cards.push_back(card);

    card = fDealer->GetCard();
    fPlayer->cards.push_back(card);

}

void Game::more()
{
    //Даём карту игроку на текущую руку
    Card* card = fDealer->GetCard();
    if(FirstHand)
        fPlayer->cards.push_back(card);
    else
        fPlayer->second.push_back(card);
}

void Game::moreYourself()
{
    //Карту дилеру
    Card* card = fDealer->GetCard();
    fDealer->cards.push_back(card);
}

void Game::Reset()
{
    //Сброс игры
    fPlayer->Reset();
    fDealer->Reset();
    //Левая рука НЕ проиграла
    FirstHandLose = false;
    //Сейчас играет левая
    FirstHand = true;
}

void Game::PrintStat()
{
    cout << "Your cards ";
    fPlayer->PrintCards();
    fPlayer->PrintSecond();
    cout << "Dealer cards ";
    fDealer->PrintCards();
    cout << "Dealer points " << fDealer->points() << endl
         << "Yours card points " << fPlayer->points() << endl
         << "Yours second points " << fPlayer->SecondPoints() << endl
         << "Your money " << fPlayer->money << endl;
}

void Game::Run()
{
    //Введённая строка
    string st;
    while(true)
    {
        //Первая раздача в начале игры
        FirstMore();
        //Если игроку выпали 2 одинаковые карты по номиналу, сплитим, то есть начинаетася игра на 2 руки
        if(fPlayer->cards[0]->getValue() == fPlayer->cards[1]->getValue())
        {
            cout << "Split" << endl;
            fPlayer->Split();
        }

        while(true)
        {
            //Если у игрока при первой раздаче выпал блекджек, то есть 10 и 11, то сразу платим ему ставку*1.5 и начинаем новую игру
            if(fPlayer->points() == 21 && fPlayer->cards.size() == 2)
            {
                fPlayer->money += 1000*3/2;
                cout << "У вас Бдэкджек" << endl;
                Reset();
                break;
            }

            st = "";
            this->PrintStat();
            cout << "1 - more" << endl
                 << "2 - stop" << endl;
            cin >> st;
            //Если человек выбрал 1, то
            if(st == "1")
            {
                //Безопасное выполнение
                try
                {
                    //Если сейчас активна левая рука, берём карту
                    if(FirstHand)
                    {
                        more();
                        //Если больше 21 очка - бросаем исключение
                        if(fPlayer->points() > 21)
                        {
                            throw -1;
                        }
                    }
                    else
                    {
                        more();
                        //Если больше 21 очка - бросаем исключение
                        if(fPlayer->SecondPoints() > 21)
                        {
                            throw -1;
                        }
                    }
                }
                //Отлавливаем возможное исключение
                catch (int e)
                {
                    //Если произошло исключение, то игрок проиграл
                    fPlayer->money -= 1000;
                    cout << "You lose " << endl;
                    this->PrintStat();
                    //Если был сплит, то переходим на следующую руку, если мы на первой, иначе проиграли
                    if(fPlayer->splitted)
                    {
                        if(!FirstHand)
                        {
                            this->Reset();
                            break;
                        }
                        else
                        {
                            FirstHandLose = true;
                            FirstHand = !FirstHand;
                            continue;
                        }
                    }
                    else
                    {
                        //Проигрыш, если сплита не было и перебор по очкам
                        this->Reset();
                        break;
                    }
                }
            }
            //Если человек сказал хватит
            if(st == "2")
            {
                //Если (был сплит И Вторая рука текущая) ИЛИ не было сплита, то переходим к ходу дилера, ИНАЧЕ просто переключаем руку
                if((fPlayer->splitted && !FirstHand) || !fPlayer->splitted)
                {
                    //Пока у дилера не быдет 17 очков, он набирает себе
                    while(fDealer->points() <= 17)
                        moreYourself();
                    try
                    {
                        //Если у дилера вдруг оказалось более 21 очка
                        if(fDealer->points() > 21)
                        {
                            //то бросаем исключение
                            throw -1;
                        }

                        //Если всё прошло ОК, то подсчитываем очки

                        //Если левая рука не проиграла
                        if(!FirstHandLose)
                        {
                            //Если очей у игрока больше, то дилер платит 1 к 1
                            if(fPlayer->points() > fDealer->points())
                            {
                                fPlayer->money += 1000;
                                cout << "You win" << endl;
                                this->PrintStat();

                                if(!fPlayer->splitted)
                                {
                                    this->Reset();
                                    break;
                                }
                            }
                            else
                            {
                                //Если ровно, то никто никому не платит
                                if(fPlayer->points() == fDealer->points())
                                {
                                    cout << "Draw game" << endl;
                                    this->PrintStat();

                                    if(!fPlayer->splitted)
                                    {
                                        this->Reset();
                                        break;
                                    }
                                }
                                else
                                {
                                    //Если у дилера больше, то он забирает ставку
                                    fPlayer->money -= 1000;
                                    cout << "You lose " << endl;
                                    this->PrintStat();

                                    if(!fPlayer->splitted)
                                    {
                                        this->Reset();
                                        break;
                                    }
                                }
                            }
                        }

                        //Если был сплит
                        if(fPlayer->splitted)
                        {
                            //Если на второй руке больше очей,то платим игроку 1:1
                            if(fPlayer->SecondPoints() > fDealer->points())
                            {
                                fPlayer->money += 1000;
                                cout << "You win" << endl;
                                this->PrintStat();
                                this->Reset();
                                break;
                            }
                            else
                            {
                                //Если ровно, то не платим
                                if(fPlayer->SecondPoints() == fDealer->points())
                                {
                                    cout << "Draw game" << endl;
                                    this->PrintStat();
                                    this->Reset();
                                    break;
                                }
                                else
                                {
                                    //Если проиграли, то платим дилеру
                                    fPlayer->money -= 1000;
                                    cout << "You lose " << endl;
                                    this->PrintStat();
                                    this->Reset();
                                    break;
                                }
                            }
                        }
                    }
                    catch (int e)
                    {
                        //если у дилера больше 21, то платим каждому игроку ставка*1.5
                        if(fPlayer->splitted)
                            //Если игра на 2 руки, то каждой платим
                            fPlayer->money += 1000*3;
                        else
                            //Если игра на одну руку, то платим ей
                            fPlayer->money += 1000*3/2;
                        cout << "You win" << endl;
                        this->PrintStat();
                        this->Reset();
                        break;
                    }
                }
                else
                {
                    FirstHand = !FirstHand;
                }

            }
        }

        cout << "Do you want to continue? y/n" << endl;
        st = "";
        cin >> st;
        if(st != "y")
            break;
    }
}

Game::~Game()
{
    delete fDealer;
    delete fPlayer;
}
