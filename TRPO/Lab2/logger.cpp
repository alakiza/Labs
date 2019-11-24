#include "logger.h"

void Logger::Log(const QString &info)
{
    QFile file("log.lg");
    if(file.open(QFile::OpenModeFlag::Append))
    {
        QTextStream fs(&file);

        //fs << info << ;

        file.close();
    }
}
