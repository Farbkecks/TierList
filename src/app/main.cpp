#include <QApplication>
#include <QPushButton>
#include "mainwindow.h"
#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "Test";
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return QApplication::exec();
}