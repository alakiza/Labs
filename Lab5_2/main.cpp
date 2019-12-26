#include <iostream>
#include <fstream>
#include <map>
#include <iterator>
#include <vector>
#include <string>

using namespace std;

vector<string> Split(string source, char* delimiter, size_t size)
{
    vector<string> res;
    int shift = 0;
    for(int SIndex = 0; SIndex < source.size(); ++SIndex)
    {
        for(int i = 0; i < size; ++i)
        {
            if(source[SIndex] == delimiter[i])
            {
                if(source == "по-женски")
                {
                    cout << source << endl;
                }
                string temp = "";
                temp = source.substr(shift, SIndex-shift);
                res.push_back( temp);
                shift = SIndex+1;
                break;
            }
        }
        if(SIndex == source.size()-1)
        {
            string temp = "";
            temp = source.substr(shift, SIndex-shift+1);
            res.push_back( temp);
        }
    }
    return res;
}

int main()
{
    char delimiters[] = {' ', '.', ',', '-', ':', '!', ';'} ;

    ifstream fin;
    fin.open("sonet.txt");
    map<string, int> wordMap;

    while (!fin.eof())
    {
        string st;
        fin >> st;
        vector<string> res = Split(st, delimiters, 7);

        for(int i = 0; i < res.size(); ++i)
        {
            cout << res[i] << endl;
            if(res[i].size() != 0)
                wordMap[res[i]] += 1;
        }
    }
    fin.close();

    for(int i = 0; i < wordMap.size(); ++i)
    {
        map<string, int>::iterator MainIter = wordMap.begin();
        map<string, int>::iterator MaxIter = MainIter;

        for(MainIter; MainIter != wordMap.end(); MainIter++)
        {
            if(MainIter->first.size() > 3)
                if(MainIter->second > MaxIter->second)
                    MaxIter = MainIter;
        }

        if(MaxIter->first.size() > 3 && MaxIter->second >= 7)
            cout << MaxIter->first << " " << MaxIter->second << endl;

        wordMap.erase(MaxIter);
    }
}
