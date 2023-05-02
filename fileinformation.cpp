#include "fileinformation.h"

/*
FileInformation::FileInformation(const QString& _fileName,int _size, bool _isExist) :
    fileName(_fileName),
    size(_size),
    isExist(_isExist)
{ }*/

FileInformation::FileInformation(){
    fileName = "NoFile";
    size = 0;
    exist = false;
}
FileInformation::FileInformation(const QString& _fileName){
    QFileInfo fileInfo(_fileName);
    fileName = _fileName;
    size = fileInfo.size();
    exist = fileInfo.exists();
}
QString FileInformation::GetFileName()
{
    return fileName;
}

int FileInformation::GetFileSize()
{
    return size;
}

bool FileInformation::IsExist()
{
    return exist;
}
//Обновление информации о файле
void FileInformation::Refresh()
{
   QFileInfo q_info(fileName);
   exist = q_info.exists();
   size = q_info.size();
}
//Функция возращает true если произошли изменения в файле, false если изменений нет
bool FileInformation::IsChanged()
{
    QFileInfo q_info(fileName);
    if(q_info.exists() != exist || q_info.size() != size) return true;
    else return false;
}
//Функция возращает true если изменен размер файла, false если изменений размера нет
bool FileInformation::IsSizeChanged()
{
    QFileInfo q_info(fileName);
    if(q_info.size() != size) return true;
    else return false;
}
//Функция возращает true если изменено состояние файла, false если изменений нет
bool FileInformation::IsExistChanged()
{
    QFileInfo q_info(fileName);
    if(q_info.exists() != exist) return true;
    else return false;
}
bool FileInformation::IsFile()
{
    QFileInfo q_info(fileName);
    if(q_info.isFile()) return true;
    else return false;
}
