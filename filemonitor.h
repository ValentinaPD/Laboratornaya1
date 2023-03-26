#ifndef FILEMONITOR_H
#define FILEMONITOR_H
#include <QObject>
#include <QVector>
#include <QString>
#include "fileinformation.h"
#include "printfileinformation.h"

class FileMonitor: public QObject
{
    Q_OBJECT
private:
   QVector<FileInformation> files; //Список файлов
public:
    FileMonitor();
    void AddFile(QString _fileName);
    void Monitor();

   // void IsFileSizeChanged(QString str);
   // void IsFileExistChanged(QString str);

signals:
    void FileChanged(QString str);
};

#endif // FILEMONITOR_H
