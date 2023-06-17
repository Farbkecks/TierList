#pragma once

#include <vector>
#include <string>

//TODO remove
#include <iostream>

using std::cout;
using std::endl;


namespace Constants {

    namespace LabelType {

//        struct labelType {
//            std::string name;
//            QColor color;
//        };

        const std::vector<std::pair<std::string, QColor>> labelTypeNames = {
                {"Test",  Qt::red},
                {"Hallo", Qt::blue}
        };
        const int labelTypeWith = 200;
        const QFont font("Comic Sans MS", 30, QFont::Bold); // Create a QFont object with desired properties
    }
}