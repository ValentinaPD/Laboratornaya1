#include "printfileinformation.h"
#include <QTextStream>

PrintFileInformation::PrintFileInformation()
{

}
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
