#include "printfileinformation.h"
#include <QTextStream>

PrintFileInformation::PrintFileInformation()
{
    message = "";
    QTextStream out(stdout);
    out << "I'm constructor"<<endl;
}
/*
void PrintFileInformation::Print(QString _fileName, int _size, bool _exist){

    QTextStream out(stdout);
    if(_exist)
    {
       out << "File "<< _fileName<<" exists. File size "<< _size<< endl;
    }
    else
    {
         out << "File "<< _fileName<<" does not exists"<< endl;
    }
}
*/
void PrintFileInformation::PrintInfo(QString str){
    QTextStream out(stdout);
    out << str<<endl;
}
