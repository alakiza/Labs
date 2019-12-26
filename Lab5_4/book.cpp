#include "book.h"

Book::Book(string aName, string aAuthor, int aYear)
{
    Name = aName;
    Author = aAuthor;
    year = aYear;
}

string Book::getName() const
{
    return Name;
}

void Book::setName(const string &value)
{
    Name = value;
}

string Book::getAuthor() const
{
    return Author;
}

void Book::setAuthor(const string &value)
{
    Author = value;
}

int Book::getYear() const
{
    return year;
}

void Book::setYear(int value)
{
    year = value;
}
