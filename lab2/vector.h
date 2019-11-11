#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class Vector
{
private:
    int* farray;
    long flength;

public:
    Vector();
    Vector(int GenFunc(int), int count);
    Vector(Vector* vect);

    void Sort(bool ascending = true);

    long length();
    int* GetArray();

//    Vector operator +(Vector b);
//    Vector operator -(Vector b);
//    Vector operator -(void);

    Vector& operator ++();
    Vector& operator --();
    Vector operator ++(int);
    Vector operator --(int);

    int& operator [] (int i);
    //std::ostream& operator << (std::ostream& out, const Vector& vector);

    ~Vector();
};

std::ostream& operator << (std::ostream& out, Vector& vector);

#endif // VECTOR_H
