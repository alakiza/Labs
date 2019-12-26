#include <iostream>
#include <vector>
#include "book.h"
#include <algorithm>

using namespace std;

class BookSorter
{
public:
    bool operator()(Book* first, Book* second)
    {
        if(first->getAuthor() < second->getAuthor())
        {
            return true;
        }
        else if(first->getAuthor() == second->getAuthor())
        {
            return first->getName() < second->getName();
        }
        else
        {
            return false;
        }
    }
};

class BookFinder
{
private:
    int First;
    int Last;
public:
    BookFinder(int aFirst, int aLast)
    {
        First = aFirst;
        Last = aLast;
    }

    bool operator()(Book* first)
    {
        int year = first->getYear();
        return (year >= First) && (year <= Last);
    }
};

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

    std::cout << "\nКниги в алфавитном порядке:\n\n";
    BookSorter book_sorter;
    std::sort(books.begin(), books.end(), book_sorter);
    std::vector<Book*>::iterator i;
    for (i = books.begin(); i != books.end(); ++i)
    {
    std::cout << (*i)->getAuthor() << " \""
    << (*i)->getName() << "\"" << std::endl;
    }
    BookFinder book_finder(2005, 2014);
    std::vector<Book*>::iterator finder = std::find_if(books.begin(), books.end(), book_finder);
    std::cout << "\nКниги в диапазоне года издания 2005 - 2014:\n\n";
    while (finder != books.end())
    {
    std:cout << (*finder)->getAuthor() << " \""
    << (*finder)->getName() << "\"" << std::endl;
    finder = std::find_if(++finder, books.end(), book_finder);
    }
    for (i = books.begin(); i != books.end(); ++i)
    {
    delete (*i);
    }
}
