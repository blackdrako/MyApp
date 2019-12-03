#ifndef BASE_H
#define BASE_H
#include <QCoreApplication>
#include <QTextCodec>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QString>
#include "errorconfig.h"
/*
 * Основа
*/
class base
{
private:
    int errorBase = NoIsEmptyFile;
    int check_real_file();
    const QString name_file_uni;
    const QString name_file_title;
public:
    virtual void load_file(QString);
};

#endif // BASE_H
