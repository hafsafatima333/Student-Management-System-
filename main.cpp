#include "mainwindow.h"
#include <QApplication>
// #include "linkedlist.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Ab hum list ko khali chorenge.
    // Data tab aayega jab user "Add Student" karega.

    MainWindow w;
    w.show();
    return a.exec();
}
