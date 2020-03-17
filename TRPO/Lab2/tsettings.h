#ifndef TSETTINGS_H
#define TSETTINGS_H

#include <QObject>
#include <QFile>
#include <qexception.h>
#include <QTextStream>

const QString SDefaultFileName = "settings.stg";

class TSettings
{
public:
    QString Language;

    QString LocalIPv4;
    int32_t LocalPort;

    TSettings();
    bool LoadFromFile(const QString &FileName);
    bool SaveToFile(const QString &FileName);

    void SaveToFile()
    {
        this->SaveToFile(SDefaultFileName);
    }

    void GenerateSettings();

};

#endif // TSETTINGS_H
