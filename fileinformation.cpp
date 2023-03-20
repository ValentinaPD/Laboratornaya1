#include "fileinformation.h"

FileInformation::FileInformation(QString _fileName,int _size, bool _isExist)
{
    fileName = _fileName;
    size = _size;
    isExist = _isExist;
}
FileInformation::GetFileName()
{
    return fileName;
}
FileInformation::GetFileSize()
{
    return size;
}
FileInformation::IsExist()
{
    return isExist;
}
