#include "printfileinformation.h"
#include <QFileInfo>
#include <QTextCodec>
PrintFileInformation::PrintFileInformation()
{

}
void PrintFileInformation::Print(QString _fileName, int _size, bool _exist){
#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif
    QTextStream out(stdout);
    if(_exist)
    {
       out << "Фаил "<< _fileName<<"существует. Размер файла "<< _size<< endl;
    }
    else
    {
         out << "Фаил не существует"<< endl;
    }
}
