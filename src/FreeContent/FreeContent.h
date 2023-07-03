#pragma once

#include <QWidget>
#include <QVBoxLayout>

#include <vector>
#include <string>

class FreeContent : public QWidget {
Q_OBJECT


public:
    //functions
    FreeContent(const std::string &path, const std::vector<std::string> &pngNames, QWidget *parent = nullptr);

private:
    //functions

private:
    //variables

};
