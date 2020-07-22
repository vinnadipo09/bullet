#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    a.setQuitOnLastWindowClosed(false);

    return a.exec();
}
