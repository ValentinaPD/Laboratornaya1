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

}
//Слежение за файлами
void FileMonitor::Monitor()
{

    for(FileInformation &file_info: files){

        if(file_info.IsChanged())
            {

                if (file_info.IsExistChanged())
                {
                    file_info.Refresh();
                    if(file_info.IsExist())
                        emit FileChanged("File " + file_info.GetFileName() +"  exists. File size " + QString::number(file_info.GetFileSize()));
                    else
                        emit FileChanged("File " + file_info.GetFileName() +" dos not exists. ");
                }
                else if(file_info.IsSizeChanged())
                {
                    QString old_size = QString::number(file_info.GetFileSize());
                    file_info.Refresh();

                    emit FileChanged("File " + file_info.GetFileName() +" size changed. Old size " + old_size + ". New size " + QString::number(file_info.GetFileSize()));
                }

            }

    }


}


