#include <QCoreApplication>
#include "filemonitor.h"
#include <QFileInfo>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FileMonitor fl;
    fl.AddFile("C:\\WpfApp2\\WpfApp2.sln");
    QTextStream out(stdout);
    //out << info1.size()<< endl;
    return a.exec();
}
