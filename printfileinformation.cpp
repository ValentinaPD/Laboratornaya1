#include "printfileinformation.h"


PrintFileInformation::PrintFileInformation()
{
    message = "";
}


void PrintFileInformation::PrintInfo(QString str){
    QTextStream out(stdout);
    out << str<<endl;
}
