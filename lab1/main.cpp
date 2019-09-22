#include <iostream>
#include <cstring>
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

void Show2DArray(int** arr, size_t rows, size_t col)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
            printf("%5d", arr[i][j]);
        printf("\n");
    }
}

void QSort(int* mass, int left, int right)
{
    if (right < left) return;
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
    int** res = new int*[ex2_maslen/2];
    for(int i = 0; i < ex2_maslen/2; i++) res[i] = new int[2];

    int i = 0;
    for(int j = 0; j < ex2_maslen/2; j++)
        for(int k = 0; k < 2; k++) res[j][k] = input[i++];

    return res;
}

void ex2()
{
    int* input = InitArray();
    //for(int i = 0; i < ex2_maslen; i++) cout << input[i] << " ";
    ShowArray(input, ex2_maslen);
    QSort(input, 0, ex2_maslen-1);
    ShowArray(input, ex2_maslen);
    int** out = ConvertArrayTo2D(input);

    Show2DArray(out, ex2_maslen/2, 2);

    for(int i = 0; i < ex2_maslen/2; i++) delete[] out[i];
    delete []out;
    delete []input;
}

char* strcpy(char* destination, char* source)
{
    int i = 0;
    for(i = 0; destination[i] != 0; i++){};
    int length = i;
    for(i = 0; source[i] != 0; i++){};
    length += i + 1;

    char* res = new char[length];

    char* ptrres = res;
    char* ptrd = destination;
    char* ptrs = source;

    while(*ptrres++ = *ptrd++);
    ptrres--;
    while(*ptrres++ = *ptrs++);

    return res;
}

/*char* strcpy(char* destination, char* source)
{
    char* ptrd = destination;
    char* ptrsrc = source;

    while(*ptrd) ptrd++;
    while(*ptrd++ = *ptrsrc++);
    return destination;
}*/

void ex3()
{
    char* str1 = new char[80];
    char* str2 = new char[80];

    cin.getline(str1, 80);
    cin.getline(str2, 80);

    char* str3 = strcpy(str1, str2);

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    delete[] str1;
    delete[] str2;
    delete[] str3;
}

int main()
{
    char num = 0;
    do
    {
        num = 0;
        cout << "Введите номер задания(e для выхода)\n";
        cin >> num;
        switch (num) {
        case '1':
            ex1();
            break;
        case '2':
            ex2();
            break;
        case '3':
            ex3();
            break;
        default:
            cout << "Введите 1-3\n";
            break;
        }
    }
    while(num != 'e');
    //cout << "Select exercise\n" << endl;
    //cin >> num;
    //cout << num  << endl;
    return 0;
}
