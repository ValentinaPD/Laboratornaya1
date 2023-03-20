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
    QTextStream out(stdout);
    file.Refresh();
    out << file.GetFileSize()<< endl;
}
void FileMonitor::Monitor()
{

}


