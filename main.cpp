#include <QCoreApplication>
#include "filemonitor.h"
#include <QFileInfo>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FileMonitor fl;
    fl.AddFile("C:\\MyFiles\\text.txt");
    fl.AddFile("C:\\MyFiles\\text1.txt");
    fl.Monitor();
    //QTextStream out(stdout);
    //out << info1.size()<< endl;
    return a.exec();
}
