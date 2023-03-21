#include "filemonitor.h"
#include <thread>
#include <chrono>
#include "printfileinformation.h"
FileMonitor::FileMonitor()
{

}
//Добавление файла для слежения
void FileMonitor::AddFile(QString _fileName)
{
    FileInformation file(_fileName);
    files.push_back(file);  
}
//Слежение за файлами
void FileMonitor::Monitor()
{
    for(FileInformation &file_info: files){
        if(file_info.IsChanged())
            {
                if(file_info.IsExistChanged())
                {

                }
                else if(file_info.IsSizeChanged())
                {

                }
                file_info.Refresh();
            }
    }


}


