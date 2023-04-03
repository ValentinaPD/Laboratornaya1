#include "printfileinformation.h"
#include <windows.h>

PrintFileInformation::PrintFileInformation()
{
    message = "";
}


void PrintFileInformation::PrintInfo(QString str){
    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

    QTextStream out(stdout);
    out << "hjbhj"<<endl;
    out << str<<endl;
}
void PrintFileInformation::PrintError(QString str){
    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

    QTextStream out(stdout);
    out << "hjbhj"<<endl;
    out << str<<endl;
}
