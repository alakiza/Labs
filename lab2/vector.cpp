#include "vector.h"
#include "stdexcept"
#include <exception>
#include <string.h>

Vector::Vector()
{
    farray  = NULL;
    flength = 0;
}

Vector::Vector(int GenFunc(int), int count)
{
    farray = new int[count];
    for(int i = 0; i < count; i++)
    {
        farray[i] = GenFunc(i);
    }
    flength = count;
}

Vector::Vector(Vector* vect)
{
    int* tmp = vect->GetArray();
    flength = vect->length();
    farray = new int[flength];
    memcpy(farray, tmp, sizeof(tmp));
}

int AscendingComparator(const void* a, const void* b)
{
//    if ((int)a < (int)b) return -1;
//    if ((int)a == (int)b) return 0;
//    if ((int)a > (int)b) return 1;
    return *(int*)a - *(int*)b;
}

int DescendingComparator(const void* a, const void* b)
{
    return *(int*)b - *(int*)a;
//    if ((int)a > (int)b) return -1;
//    if ((int)a == (int)b) return 0;
//    if ((int)a < (int)b) return 1;
}

void Vector::Sort(bool ascending)
{
    if(ascending)
        qsort(farray, flength, sizeof(int), AscendingComparator);
    else
        qsort(farray, flength, sizeof(int), DescendingComparator);
}

Vector::~Vector()
{
    delete[] farray;
}

int* Vector::GetArray()
{
    return farray;
}

long Vector::length()
{
    return flength;
}

//Vector Vector::operator +(Vector b)
//{
//    for(int i = 0; i < flength; i++)
//    {

//    }
//    return *this;
//}

//Vector Vector::operator -(Vector b)
//{
//    for(int i = 0; i < flength; i++)
//    {

//    }
//    return *this;
//}

//Vector Vector::operator -()
//{
//    for(int i = 0; i < flength; i++)
//    {

//    }
//    return *this;
//}

Vector& Vector::operator ++()
{
    for(int i = 0; i < flength; i++)
    {
        farray[i]++;
    }
    return *this;
}

Vector& Vector::operator --()
{
    for(int i = 0; i < flength; i++)
    {
        farray[i]--;
    }
    return *this;
}

Vector Vector::operator ++(int)
{
    Vector tmp(this);
    ++(*this);
    return tmp;
}

Vector Vector::operator --(int)
{
    Vector tmp(this);
    --(*this);
    return tmp;
}

int& Vector::operator [](int i)
{
    if ((i >=0) && (i < flength))
        return farray[i];
    else
        throw std::runtime_error("Index out of range!");
}

std::ostream& operator << (std::ostream& out, Vector& vector)
{
    for(int i = 0; i < vector.length(); i++)
    {
        out << vector[i] << ' ';
    }
    return out;
}
