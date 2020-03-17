#ifndef TINTERNATIONALIZER_H
#define TINTERNATIONALIZER_H
#include <QTreeWidget>
#include <QtXml>
#include <QFile>

class TInternationalizer
{
private:
    QTreeWidgetItem* fcaptions;
    QString fDefaultLanguage;

    void CreateDefaultTranslation();
public:
    TInternationalizer();

    QTreeWidgetItem* GetLanguage(QString& language);
    QTreeWidgetItem* GetDefaultLanguage();

    QString GetDefaultLanguageName();
    void SetDefaultLanguage(QString& DefaultLanguage);

    ~TInternationalizer();
};

#endif // TINTERNATIONALIZER_H
