#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
class Cache
{
private:
    vector<T> fData;

public:
    void put(T elem)
    {
        fData.push_back(elem);
    }

    bool contains(T elem)
    {
        for(int i = 0; i < fData.size(); ++i)
        {
            if(fData[i] == elem)
                return true;
        }
        return false;
    }

    void operator += (T elem)
    {
        this->put(elem);
    }
};

template<>
class Cache<string>
{
private:
    vector<string> fData;

public:
    void put(string elem)
    {
        fData.push_back(elem);
    }

    void add(string elem)
    {
        if(fData.size() >= 100)
            throw "Over 100 elements";
        else
            fData.push_back(elem);
    }

    bool contains(string elem)
    {
        for(int i = 0; i < fData.size(); ++i)
        {
            if(fData[i][0] == elem[0])
                return true;
        }
        return false;
    }

    void operator += (string elem)
    {
        this->put(elem);
    }
};


int main()
{
    Cache<int> cache;
    cache.put(1);
    cache.put(2);
    cache.put(3);
    cache += 5;
    // так должно работать
    // так тоже должно работать
    Cache<std::string> voc;
    voc.put("OK");
    std::cout << voc.contains("Only") << std::endl; // 1
    std::cout << cache.contains(5) << std::endl;
    // 1
    return 0;
}
