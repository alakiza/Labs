#ifndef TSETTINGSMASTER_H
#define TSETTINGSMASTER_H
#include <QObject>
#include "tsettings.h"

class TSettingsMaster
{
public:
    static TSettingsMaster* instance()
    {
        if(!finstance)
            finstance = new TSettingsMaster();
        return finstance;
    }
    QString Language();
    QString IP();
    int32_t Port();
    ~TSettingsMaster();
    TSettings *Settings();
private:
    TSettingsMaster();
    TSettings* fSettings;
    static TSettingsMaster* finstance;
};

#endif // TSETTINGSMASTER_H
