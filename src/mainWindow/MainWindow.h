#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QKeyEvent>
#include <QApplication>
#include <QGridLayout>
#include "TypeLabel.h"
#include "Constants.h"

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    QWidget *centralWidget;
    TypeLabel *typeLabel;
    QGridLayout *mainLayout;
};