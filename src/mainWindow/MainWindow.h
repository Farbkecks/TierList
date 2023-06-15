#pragma once

#include <QMainWindow>
#include <QPushButton>
#include "TypeLabel.h"
#include "Constants.h"

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    TypeLabel typeLabel;
};