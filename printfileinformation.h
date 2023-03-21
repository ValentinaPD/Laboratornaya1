#ifndef PRINTFILEINFORMATION_H
#define PRINTFILEINFORMATION_H
#include <QString>

class PrintFileInformation
{
public:
    PrintFileInformation();
    void Print(QString _fileName, int _size, bool _exist);
};

#endif // PRINTFILEINFORMATION_H
