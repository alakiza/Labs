#ifndef TSETTINGSMASTER_H
#define TSETTINGSMASTER_H
#include <QObject>
#include "tsettings.h"

class TSettingsMaster
{
public:
    TSettingsMaster* instance();

    ~TSettingsMaster();
private:
    TSettingsMaster();
    static TSettings fSettings;
    static TSettingsMaster* finstance;
};

#endif // TSETTINGSMASTER_H
