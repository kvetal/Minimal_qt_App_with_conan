#include <QApplication>

#include "MainForm.h"
 
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainForm window;
    window.show();

    return a.exec();
}
