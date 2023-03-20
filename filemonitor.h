#ifndef FILEMONITOR_H
#define FILEMONITOR_H
#include <QVector>
#include <QString>
#include "fileinformation.h"

class FileMonitor
{
   QVector<FileInformation> files;
public:
    FileMonitor();
    void AddFile(QString _fileName);
    void Monitor();

};

#endif // FILEMONITOR_H
