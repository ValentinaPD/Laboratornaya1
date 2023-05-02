#include <QCoreApplication>
#include "filemonitor.h"
#include "printfileinformation.h"
#include <QFileInfo>
#include <thread>
#include <chrono>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    PrintFileInformation printer;
    FileMonitor& instance = FileMonitor::Instance();
    //Тест №1 Добавляем фаил без названия
    //Тест №2 Добавляем фаилы с одинаковыми названиями
    //Тест №2 Добавляем не фаил(папку)

    instance.AddFile("C:\\MyFiles\\text.txt");
    instance.AddFile("");
    instance.AddFile("C:\\MyFiles\\text1.txt");
    instance.AddFile("C:\\MyFiles\\text1.txt");
    instance.AddFile("C:\\MyFiles");

/*Тест № 4 Не добавляем фаилы*/
    QVector<QString> _files;
    _files = instance.GetFilesInfo();

     for(int i = 0; i<_files.count();i++){
            printer.PrintInfo(_files[i]);
     }

    QObject::connect(&instance, &FileMonitor::FileChanged, &printer,&PrintFileInformation::PrintInfo);
    while(true)
    {
            std::this_thread::sleep_for( std::chrono::milliseconds(100));
            instance.Monitor();
    }
/*Тест № 4 Не добавляем фаилы
    PrintFileInformation printer;
    FileMonitor& instance = FileMonitor::Instance();
    QVector<QString> _files;
    _files = instance.GetFilesInfo();

     for(int i = 0; i<_files.count();i++){
            printer.PrintInfo(_files[i]);
     }

    QObject::connect(&instance, &FileMonitor::FileChanged, &printer,&PrintFileInformation::PrintInfo);
    while(true)
    {
            std::this_thread::sleep_for( std::chrono::milliseconds(100));
            instance.Monitor();
    }

*/
    return a.exec();
}
