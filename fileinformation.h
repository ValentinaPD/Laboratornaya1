#ifndef FILEINFORMATION_H
#define FILEINFORMATION_H
#include <QString>

class FileInformation
{
    QString fileName;//Имя файла
    int size;//Размер файла
    bool isExist;
public:
    FileInformation();
    FileInformation(const QString& _fileName,int _size = 0, bool _isExist = 0);
    QString GetFileName();
    int GetFileSize();
    bool IsExist();
};

#endif // FILEINFORMATION_H
