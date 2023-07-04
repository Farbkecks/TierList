#include "MainWindow.h"


MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent) {

    //create a QWidget for a Layout
    centralWidget = new QWidget(this);
    this->setCentralWidget(centralWidget);

    //use the centralWidget to use a main layout
    mainLayout = new QGridLayout(centralWidget);
    mainLayout->setAlignment(Qt::AlignLeft);

    //put the Left type Labels in the main Layout
    typeLabel = new TypeLabel(Constants::LabelType::labelTypeWith, Constants::LabelType::labelTypeNames,
                              Constants::LabelType::font, nullptr);
    mainLayout->addWidget(typeLabel, 0, 0);

    freeContent = new FreeContent(Constants::FreeContent::path, nullptr);
    mainLayout->addWidget(freeContent, 1, 0);

}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    //track Escape to close application with key
    if (event->key() == Qt::Key_Escape) {
        QApplication::quit();
    }
}
