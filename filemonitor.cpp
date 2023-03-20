#include "filemonitor.h"
#include <QTextStream>

FileMonitor::FileMonitor()
{

}
void FileMonitor::AddFile(QString _fileName)
{
    FileInformation file(_fileName);
    QVector<int> vec;
    files.push_back(file);
}
void FileMonitor::Monitor()
{

}


