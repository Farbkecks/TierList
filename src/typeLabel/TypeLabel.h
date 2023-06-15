#pragma once

#include <QWidget>
#include <vector>
#include <string>

class TypeLabel : public QWidget {
Q_OBJECT

public:
    //functions
    explicit TypeLabel(int width, int height, std::vector<std::string> labelNames,
                       QWidget *parent = nullptr);

private:
    //functions

private:
    //variables
    QSize size;
    std::vector<std::string> labelNames;

};
