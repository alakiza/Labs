#ifndef TNETWORKSCANER_H
#define TNETWORKSCANER_H
#include <QtCore>
#include <QVector>


class TNetworkScaner
{
public:
    TNetworkScaner();
    QVector<QString> Scan();
    ~TNetworkScaner();
};

#endif // TNETWORKSCANER_H
