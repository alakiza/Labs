#include <iostream>
#include "vector.h"
#include "matrix.h"

using namespace std;

int GenFunc(int a)
{
    if(a%2)
        return -(a*a+1);
    else
        return a*a+1;

}

int main()
{
    //Matrix* matrix = new Matrix();
    //matrix->print();
    Vector* vect = new Vector(&GenFunc, 25);
    cout << *vect << endl;
    vect->Sort(true);
    cout << *vect << endl;
    ++(*vect);
    cout << *vect << endl;
    (*vect)++;
    cout << *vect << endl;
    --(*vect);
    cout << *vect << endl;
    (*vect)--;
    cout << *vect << endl;

    Matrix* matr = new Matrix(vect, 2);
    cout << *matr << endl;
    ++(*matr);
    cout << *matr << endl;
    (*matr)++;
    cout << *matr << endl;
    --(*matr);
    cout << *matr << endl;
    (*matr)--;
    cout << *matr << endl;

    delete vect;
    delete matr;

    return 0;
}
