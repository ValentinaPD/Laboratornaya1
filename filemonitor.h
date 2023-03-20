#ifndef FILEMONITOR_H
#define FILEMONITOR_H
#include <QVector>
#include "fileinformation.h"

class FileMonitor
{
   QVector<FileInformation> files;
public:
    FileMonitor();
};

#endif // FILEMONITOR_H
