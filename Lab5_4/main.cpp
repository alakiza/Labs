#include <iostream>
#include <vector>
#include "book.h"
#include <algorithm>

using namespace std;

int main()
{
    std::vector<Book*> books;
    books.push_back(new Book("Война и мир", "Толстой Л.Н.", 2010));
    books.push_back(new Book("Подросток", "Достоевский Ф.М.", 2004));
    books.push_back(new Book("Обрыв", "Гончаров И.А.", 2010));
    books.push_back(new Book("Анна Каренина", "Толстой Л.Н.", 1999));
    books.push_back(new Book("Обыкновенная история", "Гончаров И.А.", 2011));
    books.push_back(new Book("Утраченные иллюзии", "Бальзак О.", 2009));
    books.push_back(new Book("Оливер Твист", "Диккенс Ч.", 2001));
    books.push_back(new Book("Фауст", "Гёте И.В.", 2010));
    books.push_back(new Book("Лилия долины", "Бальзак О.", 1998));

    cout << "Книг выпущенные позже 2009 : " << count_if(books.begin(), books.end(), [](Book* b1){return b1->getYear() > 2009;}) << endl;

    std::vector<Book*>::iterator i;
    for (i = books.begin(); i != books.end(); ++i)
    {
        delete (*i);
    }
}
