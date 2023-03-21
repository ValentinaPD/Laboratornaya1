#include <QCoreApplication>
#include "filemonitor.h"
#include <QFileInfo>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FileMonitor fl;
    fl.AddFile("C:\\MyFiles\\text.txt");
    fl.AddFile("C:\\MyFiles\\text1.txt");

    fl.Monitor();
    return a.exec();
}
