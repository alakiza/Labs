#include "matrix.h"
#include <iostream>
#include <cstring>
#include <math.h>
#include <exception>

Matrix::Matrix()
{
    farray = new int*[0];
    fCols = 0;
    fRows = 0;
}

Matrix::Matrix(Matrix *matr)
{
    int** tmp = matr->GetArray();
    fCols = matr->Cols();
    fRows = matr->Rows();
    farray = new int*[fRows];
    memccpy(farray, tmp, sizeof(int*), fRows);
    for(int i = 0; i < fRows; ++i)
    {
        farray[i] = new int[fCols];
        memccpy(farray[i], tmp[i], sizeof(int), fCols);
    }
}

Matrix::Matrix(Vector* vect, int Cols)
{
    fCols = Cols;
    fRows = (int)ceil((double)vect->length()/Cols);
    farray = new int*[fRows];
    int tmp = 0;
    for(int i = 0; i < fRows; ++i)
    {
        farray[i] = new int[fCols];
        for(int k = 0; k < fCols; ++k)
        {
            if(tmp < vect->length())
                farray[i][k] = (*vect)[tmp++];
            else
                farray[i][k] = 0;
        }
    }
}

int Matrix::Cols()
{
    return fCols;
}

int Matrix::Rows()
{
    return fRows;
}

int **Matrix::GetArray()
{
    return farray;
}

int Matrix::At(int row, int col)
{
    return farray[row][col];
}

void Matrix::SetAt(int Value, int row, int col)
{
    if(row > 0 && row < fRows && col > 0 && col < fCols)
        farray[row][col] = Value;
    else
        throw new std::runtime_error("Index out of range!");
}

Matrix &Matrix::operator ++()
{
    for(int i = 0; i < fRows; ++i)
        for(int j = 0; j < fCols; ++j)
            ++farray[i][j];
    return *this;
}

Matrix &Matrix::operator --()
{
    for(int i = 0; i < fRows; ++i)
        for(int j = 0; j < fCols; ++j)
            --farray[i][j];
    return *this;
}

Matrix Matrix::operator ++(int)
{
    Matrix tmp(this);
    ++(*this);
    return tmp;
}

Matrix Matrix::operator --(int)
{
    Matrix tmp(this);
    --(*this);
    return tmp;
}

Matrix::~Matrix()
{
    for(int i = 0; i < fRows; ++i)
    {
        delete[] farray[i];
    }
    delete[] farray;
}

std::ostream& operator << (std::ostream& out, Matrix& matr)
{
    int** tmp = matr.GetArray();

    for(int i = 0; i < matr.Rows(); i++)
    {
        for(int j = 0; j < matr.Cols(); j++) std::cout << tmp[i][j] << ' ';
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return out;
}
