#include "risingwidget.h"
#include "risingwidgetplugin.h"

#include <QtPlugin>

RisingWidgetPlugin::RisingWidgetPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void RisingWidgetPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool RisingWidgetPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *RisingWidgetPlugin::createWidget(QWidget *parent)
{
    return new RisingWidget(parent);
}

QString RisingWidgetPlugin::name() const
{
    return QLatin1String("RisingWidget");
}

QString RisingWidgetPlugin::group() const
{
    return QLatin1String("MyWidget");
}

QIcon RisingWidgetPlugin::icon() const
{
    return QIcon();
}

QString RisingWidgetPlugin::toolTip() const
{
    return QLatin1String("");
}

QString RisingWidgetPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool RisingWidgetPlugin::isContainer() const
{
    return false;
}

QString RisingWidgetPlugin::domXml() const
{
    return QLatin1String("<widget class=\"RisingWidget\" name=\"risingWidget\">\n</widget>\n");
}

QString RisingWidgetPlugin::includeFile() const
{
    return QLatin1String("risingwidget.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(risingwidgetplugin, RisingWidgetPlugin)
#endif // QT_VERSION < 0x050000
