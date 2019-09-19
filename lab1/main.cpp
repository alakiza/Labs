#include <iostream>
#include <math.h>

using namespace std;

const int ex1_maslen = 16;

void ProcessArray(int a[], int res[], int& count)
{
    count = 0;
    int pow2 = 0, pow3 = 0;

    for(int i = 0; i < ex1_maslen; i++)
    {
        if(i % 2 == 0)
            a[i] = (int)pow(2, ++pow2);
        else
            a[i] = (int)pow(3, ++pow3);

        if(a[i] >= 10 && a[i] <= 99)
        {
            res[(count++)] = a[i];
        }
    }
}

void ex1()
{
    int a[ex1_maslen] = {0};
    int out[ex1_maslen];
    int count = 0;

    ProcessArray(a, out, count);

    for(int i = 0; i < ex1_maslen; i++) cout << a[i] << ' ';
    cout << '\n';
    for(int i = 0; i < count; i++) cout << out[i] << ' ';
    cout << '\n' << "count = " << count << '\n';
}

const int ex2_maslen = 18;

int* InitArray()
{

}

void ex2()
{
    int* input = new int[ex2_maslen];

}

int main()
{
    int num = 0;
    ex1();
    //cout << "Select exercise\n" << endl;
    //cin >> num;
    //cout << num  << endl;
    return 0;
}
