#include <iostream>
#include "datamanager.h"
#include <iterator>

using namespace std;

int main()
{
    DataManager<int> dataManagerInt;
    dataManagerInt.push(10);
    dataManagerInt.push(20);
    dataManagerInt.push(30);
    int a = dataManagerInt.pop();
    int b = dataManagerInt.peek();
    cout << a << " " << b << endl;
    
    DataManager<char> dataManagerChar;
    dataManagerChar.push('m');
    dataManagerChar.push('a');
    dataManagerChar.push('t');
    dataManagerChar.push('f');
    dataManagerChar.push('a');
    dataManagerChar.push('k');
    char* data = new char[4]{'R', 'O', 'S', 'A'};
    dataManagerChar.push(data, 4);

    cout << dataManagerChar.popUpper() << " " << dataManagerChar.popUpper() << endl;

    dataManagerChar.Print();
    dataManagerInt.Print();


    return 0;
}
