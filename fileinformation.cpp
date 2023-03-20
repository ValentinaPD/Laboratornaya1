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
    isExist = false;
}
FileInformation::FileInformation(const QString& _fileName,int _size, bool _isExist){
    fileName = _fileName;
    size = _size;
    isExist = _isExist;
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
    return isExist;
}
