#include "tsettingsmaster.h"

TSettingsMaster* TSettingsMaster::finstance = nullptr;

QString TSettingsMaster::Language()
{
    return fSettings->Language;
}

QString TSettingsMaster::IP()
{
    return fSettings->LocalIPv4;
}

int32_t TSettingsMaster::Port()
{
    return fSettings->LocalPort;
}

TSettings* TSettingsMaster::Settings()
{
    return fSettings;
}

TSettingsMaster::~TSettingsMaster()
{
    fSettings = new TSettings();
}

TSettingsMaster::TSettingsMaster()
{
    delete fSettings;
}
