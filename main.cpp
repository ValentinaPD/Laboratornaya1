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
    instance.AddFile("C:\\MyFiles\\text.txt");
   // instance.AddFile("C:\\MyFiles\\text.txt");
    //instance.AddFile("C:\\MyFiles\\text1.txt");
    //instance.DeleteFiles();


    QObject::connect(&instance, SIGNAL(FileChanged(QString)), &printer, SLOT(PrintInfo(QString)));
    while(true)
    {
            std::this_thread::sleep_for( std::chrono::milliseconds(100));
            instance.Monitor();

    }

    return a.exec();
}
