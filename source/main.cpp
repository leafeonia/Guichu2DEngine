#include "simuworld.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimuWorld w;
    w.show();

    return a.exec();
}
