#include "printfileinformation.h"


PrintFileInformation::PrintFileInformation()
{
    message = "";
}


void PrintFileInformation::PrintInfo(QString str){
    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    QTextStream out(stdout);
    out << str<<endl;
}

