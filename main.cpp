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
    FileMonitor fl;
    fl.AddFile("C:\\MyFiles\\text.txt");
    fl.AddFile("C:\\MyFiles\\text1.txt");

    QObject::connect(&fl, SIGNAL(FileChanged(QString)), &printer, SLOT(PrintInfo(QString)));
    while(true)
    {
            std::this_thread::sleep_for( std::chrono::milliseconds(100));
            fl.Monitor();

    }

    return a.exec();
}
