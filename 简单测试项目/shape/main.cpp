#include "shaped.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    shaped w;
    w.show();

    return a.exec();
}
