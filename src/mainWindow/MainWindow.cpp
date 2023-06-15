#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), typeLabel(100, 100, Constans::labelTypeNames, this) {
}