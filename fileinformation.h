#ifndef FILEINFORMATION_H
#define FILEINFORMATION_H
#include <QString>

class FileInformation
{
    QString fileName;//Имя файла
    int size;//Размер файла
    bool isExist;
public:
    FileInformation(QString _fileName,int _size, bool _isExist);
    QString GetFileName();
    int GetFileSize();
    bool IsExist();
};

#endif // FILEINFORMATION_H
