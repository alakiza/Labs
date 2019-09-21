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

void ShowArray(int* mass, size_t length)
{
    for(int i = 0; i < length; i++) printf("%d ", mass[i]);
    printf("\n");
}

void QSort(int* mass, int left, int right)
{
    int tmp = 0;
    int l = left;
    int r = right;
    int mid = mass[(l+r)/2];
    do
    {
        while(mass[l] > mid) l++;
        while(mass[r] < mid) r--;
        if(l <= r)
        {
            tmp = mass[l];
            mass[l] = mass[r];
            mass[r] = tmp;
            l++;
            r--;
        }
    }while (l<r);
    if(left < l) QSort(mass, left, r);
    if(l < right) QSort(mass, l, right);
}

int* InitArray()
{
    int* res = new int[ex2_maslen];
    for(int i = 0; i < ex2_maslen; i++)
    {
        res[i] = i*i+1;
        if(i % 2 != 0) res[i] = -res[i];
    }
    return(res);
}

int** ConvertArrayTo2D(int* input)
{

}

void ex2()
{
    int* input = InitArray();
    //for(int i = 0; i < ex2_maslen; i++) cout << input[i] << " ";
    ShowArray(input, ex2_maslen);
    QSort(input, 0, ex2_maslen-1);
    ShowArray(input, ex2_maslen);
}

int main()
{
    int num = 0;
    ex2();
    //cout << "Select exercise\n" << endl;
    //cin >> num;
    //cout << num  << endl;
    return 0;
}
