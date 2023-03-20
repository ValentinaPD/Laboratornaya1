#include "fileinformation.h"
/*
FileInformation::FileInformation(const QString& _fileName,int _size, bool _isExist) :
    fileName(_fileName),
    size(_size),
    isExist(_isExist)
{ }
*/
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
void FileInformation::Refresh()
{
   QFileInfo q_info(fileName);
   exist = q_info.exists();
   size = q_info.size();
}
bool FileInformation::IsChanged()
{
    QFileInfo q_info(fileName);
    if(q_info.exists() != exist || q_info.size() != size) return true;
    else return false;
}
