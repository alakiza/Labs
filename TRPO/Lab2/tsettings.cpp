#include "tsettings.h"

/// Exceptions : QFile::FatalError when cannot create settings file
TSettings::TSettings()
{
    if(!this->LoadFromFile(SDefaultFileName))
    {
        this->GenerateSettings();
    }
}

void TSettings::GenerateSettings()
{
    LocalIPv4 = "0.0.0.0";
    LocalPort = 6666;
    Language = "Ru";
    if(!this->SaveToFile(SDefaultFileName))
    {
        throw QFile::FatalError;
    }
}

bool TSettings::SaveToFile(const QString &FileName)
{
    QFile fout(FileName);
    if(fout.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::NewOnly))
    {
        QTextStream txtStream(&fout);

        txtStream << LocalIPv4 << LocalPort << Language;

        fout.close();
        return true;
    }
    return false;
}

bool TSettings::LoadFromFile(const QString& FileName)
{
    QFile fin(FileName);
    if(fin.open(QIODevice::Text | QIODevice::ReadOnly))
    {
        QTextStream txtStream(&fin);

        txtStream >> LocalIPv4 >> LocalPort >> Language;

        fin.close();
        return true;
    }
    return false;
}
