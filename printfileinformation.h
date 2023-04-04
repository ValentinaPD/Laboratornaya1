#ifndef PRINTFILEINFORMATION_H
#define PRINTFILEINFORMATION_H
#include <QString>
#include <QObject>
#include <QTextStream>
#include <windows.h>

class PrintFileInformation: public QObject
{
    Q_OBJECT
public:
    PrintFileInformation();

private:
    QString message;
public slots:
    void PrintInfo(QString str);
};



#endif // PRINTFILEINFORMATION_H
