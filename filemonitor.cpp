#include "filemonitor.h"
#include <QTextStream>

FileMonitor::FileMonitor(){

}
FileMonitor& FileMonitor::Instance()
{
    static FileMonitor s;
    return s;
}
//Добавление файла для слежения
void FileMonitor::AddFile(QString _fileName)
{
    if(!CheckRepeatFile(_fileName) && _fileName!="" && FileInformation(_fileName).IsFile())
    {
        FileInformation file(_fileName);
        files.push_back(file);
    }

}
bool FileMonitor::CheckRepeatFile(QString _fileName){
    return SearchFile(_fileName)==-1 ? false:true;
}
int FileMonitor::SearchFile(QString _fileName){
    for(int i=0; i<files.count();i++){
        if(files[i].GetFileName()==_fileName)
            return i;
    }
    return -1;
}
QVector<QString> FileMonitor::GetFilesInfo(){
    QVector<QString> info;

    for(int i=0;i<files.count();i++){
        QString _exist = files[i].IsExist()?" exists":" dosn't exist";
        info.push_back(QString("File " + files[i].GetFileName() + _exist +". Size " + QString::number(files[i].GetFileSize())));
    }
    return info;
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


