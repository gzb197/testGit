#include "testGithub.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testGithub w;
    w.show();
    return a.exec();
}
