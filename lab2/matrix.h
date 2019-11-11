#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include "vector.h"


class Matrix
{
private:
    int** farray;
    int fCols;
    int fRows;
public:
    Matrix();
    Matrix(Matrix* matr);
    Matrix(Vector* vect, int Cols);

    int Cols();
    int Rows();
    int** GetArray();

    int At(int row, int col);
    void SetAt(int Value, int row, int col);

    Matrix& operator ++();
    Matrix& operator --();
    Matrix operator ++(int);
    Matrix operator --(int);

    ~Matrix();
};

std::ostream& operator <<(std::ostream& out, Matrix& matr);

#endif // MATRIX_H
