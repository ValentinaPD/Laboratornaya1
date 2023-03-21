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

    bool IsExist();
    bool IsChanged();
    bool IsSizeChanged();
    bool IsExistChanged();

    void Refresh();
};

#endif // FILEINFORMATION_H
