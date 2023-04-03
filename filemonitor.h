#ifndef FILEMONITOR_H
#define FILEMONITOR_H
#include <QObject>
#include <QVector>
#include <QString>
#include "fileinformation.h"

class FileMonitor: public QObject
{
    Q_OBJECT
private:
   QVector<FileInformation> files; //Список файлов
   FileMonitor();
   FileMonitor(FileMonitor const&);
   FileMonitor& operator = (FileMonitor const&);

   bool CheckRepeatFile(QString _fileName);
   int SearchFile(QString _fileName);
public:
    static FileMonitor& Instance();
    void AddFile(QString _fileName);
    //void DeleteFiles();
    void Monitor();
    void LogError(QString _error);
signals:
    void FileChanged(QString str);
    void ErrorSinal(QString str);
};

#endif // FILEMONITOR_H
