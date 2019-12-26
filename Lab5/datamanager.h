#ifndef DATAMANAGER_H
#define DATAMANAGER_H
#include <iostream>
#include <ostream>
#include <fstream>
#include <iterator>
#include <deque>
using namespace std;

template<class T>
class DataManager
{
private:
    deque<T> fArray;
    void SaveToFile();
    void LoadFromFile();
public:
    DataManager();
    void push(T elem);
    void push(T elems[], size_t n);
    T peek();
    T pop();
    char popUpper();
    char popLower();

    void Print();
    ~DataManager();
};

template<class T>
void DataManager<T>::SaveToFile()
{
    ofstream fout;
    fout.open("dump.dat");
    for(int i = 1; i < fArray.size(); ++i)
    {
        fout.write((char*)fArray[i], sizeof(T));
    }
    fArray.erase(fArray.begin()+1, fArray.end());
    fout.close();
}

template<class T>
void DataManager<T>::LoadFromFile()
{
    ifstream fin;
    fin.open("dump.dat");
    char* temp = new char[64*sizeof(T)];
    fin.read(temp, 64*sizeof(T));
    fArray.clear();
    for(int i = 0; i < 64; ++i)
    {
        fArray.push_back((T)temp[i]);
    }
    fin.close();
}

template<class T>
DataManager<T>::DataManager()
{
    fArray.clear();
}

template<class T>
void DataManager<T>::push(T elem)
{
    fArray.push_front(elem);
    if(fArray.size() > 64) SaveToFile();
}

template<>
void DataManager<char>::push(char elem)
{
    char delemeterArray[] = {',', '-', ';', ':'};

    for(int i = 0; i < 4; ++i)
        if(elem == delemeterArray[i])
        {
            fArray.push_front('_');
            if(fArray.size() > 64) SaveToFile();
            return;
        }

    fArray.push_front(elem);
    if(fArray.size() > 64) SaveToFile();
}

template<class T>
void DataManager<T>::push(T* elems, size_t n)
{
    for(int i = 0; i < n; ++i)
    {
        this->push(elems[i]);
    }
}

template<class T>
T DataManager<T>::peek()
{
    if(fArray.size()%2 == 1)
    {
        int pos = fArray.size()/2;
        return fArray[pos];
    }
    else
    {
        return 0;
    }
}

template<class T>
T DataManager<T>::pop()
{
    int pos = fArray.size()/2;
    T res = fArray[pos];
    fArray.erase(fArray.begin()+pos);
    if(fArray.size() <= 0) this->LoadFromFile();
    return res;
}

template<>
char DataManager<char>::popUpper()
{
    int pos = fArray.size()/2;
    char res = toupper(fArray[pos]);
    fArray.erase(fArray.begin()+pos);
    if(fArray.size() <= 0) this->LoadFromFile();
    return res;
}

template<>
char DataManager<char>::popLower()
{
    int pos = fArray.size()/2;
    char res = tolower(fArray[pos]);
    fArray.erase(fArray.begin()+pos);
    if(fArray.size() <= 0) this->LoadFromFile();
    return res;
}

template<class T>
void DataManager<T>::Print()
{
    ostream_iterator<T> ositer(cout, " | ");

    copy(fArray.begin(), fArray.end(), ositer);
    cout << endl;
}

template<class T>
DataManager<T>::~DataManager()
{
    fArray.clear();
}




#endif // DATAMANAGER_H
