#ifndef ILOGGABLE_H
#define ILOGGABLE_H
#include <string>
#include <iostream>
#include <fstream>

class ILoggable
{
    virtual void LogToScreen() = 0;
    virtual void LogToFile(const std::string& FileName) = 0;
};

#endif // ILOGGABLE_H
