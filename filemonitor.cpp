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
    PrintFileInformation p;
    while(true)
    {
        std::this_thread::sleep_for( std::chrono::milliseconds(100));
        for(FileInformation &file_info: files){
            if(file_info.IsChanged())
            {

                file_info.Refresh();
                p.Print(file_info.GetFileName(),file_info.GetFileSize(),file_info.IsExist());

            }
        }

    }

}


