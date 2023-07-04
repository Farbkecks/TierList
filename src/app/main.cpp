#include <QApplication>
#include "MainWindow.h"
#include <string>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowState(Qt::WindowMaximized);
    w.show();

    return QApplication::exec();
}