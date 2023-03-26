#include "filemonitor.h"
#include <QTextStream>
FileMonitor::FileMonitor()
{
    FileInformation file("text.txt");
    files.push_back(file);
}
//Добавление файла для слежения
void FileMonitor::AddFile(QString _fileName)
{
    FileInformation file(_fileName);
    files.push_back(file);  
    QTextStream out(stdout);
    out << "I'm Add"<<endl;
}
//Слежение за файлами
void FileMonitor::Monitor()
{
    for(FileInformation &file_info: files){
        if(file_info.IsChanged())
            {
                emit FileChanged("File changed");
                file_info.Refresh();
            }

    }


}


