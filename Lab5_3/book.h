#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;

class Book
{
private:
    string Name;
    string Author;
    int year;
public:
    Book(string aName, string aAuthor, int aYear);
    string getName() const;
    void setName(const string &value);
    string getAuthor() const;
    void setAuthor(const string &value);
    int getYear() const;
    void setYear(int value);
};

#endif // BOOK_H
