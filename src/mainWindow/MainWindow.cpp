#include "MainWindow.h"


MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent) {
    centralWidget = new QWidget(this);
    this->setCentralWidget(centralWidget);

    mainLayout = new QGridLayout(centralWidget);
    mainLayout->setAlignment(Qt::AlignLeft);

    typeLabel = new TypeLabel(Constants::LabelType::labelTypeWith, Constants::LabelType::labelTypeNames, nullptr);
    mainLayout->addWidget(typeLabel);
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        QApplication::quit();
    }
}
