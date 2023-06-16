#pragma once

#include <QWidget>
#include <QLabel>
#include <QString>
#include <QVBoxLayout>
#include <vector>
#include <string>

class TypeLabel : public QWidget {
Q_OBJECT

public:
    //functions
    TypeLabel(int size, std::vector<std::pair<std::string, QColor>> const &labelNames, QWidget *parent = nullptr);

private:
    //functions

private:
    //variables
    std::vector<QLabel *> labels;
    QVBoxLayout *layout;

};
