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
   FileMonitor();
   FileMonitor(FileMonitor const&);
   FileMonitor& operator = (FileMonitor const&);
public:
    static FileMonitor& Instance();
    void AddFile(QString _fileName);
    void Monitor();

signals:
    void FileChanged(QString str);
};

#endif // FILEMONITOR_H
