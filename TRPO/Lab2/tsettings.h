#ifndef TSETTINGS_H
#define TSETTINGS_H

#include <QObject>

const QString SDefaultFileName = "Settings.stg";

class TSettings
{
    QString Language;

    TSettings();
    void LoadFromFile(QString& FileName);
    void SaveToFile(QString& FileName);

    void LoadFromFile();
    void SaveToFile();
};

#endif // TSETTINGS_H
