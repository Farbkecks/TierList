#pragma once

#include <vector>
#include <string>

//TODO remove
#include <iostream>

using std::cout;
using std::endl;


namespace Constants {

    namespace LabelType {

        const std::vector<std::pair<std::string, QColor>> labelTypeNames = {
                {"Test",  Qt::red},
                {"Hallo", Qt::blue}
        };
        const int labelTypeWith = 300;

    }
}