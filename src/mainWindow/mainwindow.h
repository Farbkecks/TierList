#pragma once

#include <QMainWindow>
#include <QPushButton>


class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    QPushButton *button;
};