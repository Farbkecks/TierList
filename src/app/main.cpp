#include <QApplication>
#include <QPushButton>
#include "MainWindow.h"
#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "Test";
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowState(Qt::WindowMaximized);
    w.show();
    return QApplication::exec();
}