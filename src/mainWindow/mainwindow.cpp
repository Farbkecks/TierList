#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent) {
    button = new QPushButton("Test", this);
    button->show();
}
