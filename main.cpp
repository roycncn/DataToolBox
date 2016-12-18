#include "datatoolbox.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataToolBox w;
    w.show();

    return a.exec();
}
