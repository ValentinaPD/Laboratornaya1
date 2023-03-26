#ifndef FILEINFORMATION_H
#define FILEINFORMATION_H
#include <QString>
#include <QFileInfo>


class FileInformation
{
    QString fileName;//Имя файла
    int size;//Размер файла
    bool exist;//Существование файла

public:
    FileInformation();
    FileInformation(const QString& _fileName);

    QString GetFileName();
    int GetFileSize();

    void Refresh();

    bool IsSizeChanged();
    bool IsExistChanged();

    bool IsExist();
    bool IsChanged();

};

#endif // FILEINFORMATION_H
