#include "filemonitor.h"
#include <QTextStream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

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
    QTextStream out(stdout);
    while(true)
    {
        std::this_thread::sleep_for( std::chrono::milliseconds(100));
        for(FileInformation &file_info: files){
            if(file_info.IsChanged())
            {
                out << "File changed"<< endl;
                file_info.Refresh();
            }
        }

    }

}


