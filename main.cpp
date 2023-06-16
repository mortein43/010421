

#include <QApplication>
#include "clock.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Digitalclock w;
    w.show();
    return a.exec();
}
