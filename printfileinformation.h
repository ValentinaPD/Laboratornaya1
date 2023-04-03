#ifndef PRINTFILEINFORMATION_H
#define PRINTFILEINFORMATION_H
#include <QString>
#include <QObject>
#include <QTextStream>
#include <conio.h>
#include <stdio.h>

class PrintFileInformation: public QObject
{
    Q_OBJECT
public:
    PrintFileInformation();

private:
    QString message;
public slots:
    void PrintInfo(QString str);
    void PrintError(QString str);
};



#endif // PRINTFILEINFORMATION_H
