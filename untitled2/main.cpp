#include "mainwindow.h"
#include <QApplication>
#include <QGuiApplication>


int main(int argc, char *argv[])
{
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);
//high DPI
    MainWindow w;
    w.show();

    return a.exec();
}
