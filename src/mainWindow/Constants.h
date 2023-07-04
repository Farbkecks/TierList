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
                {"Akshually Useful", QColor("#FB7F82")},
                {"DTC",              QColor("#FFBF7E")},
                {"If I Have TO",     QColor("#FDFF84")},
                {"Painful",          QColor("#FDFF7F")},
                {"Dog Water",        QColor("#BEFF7E")},
                {"Who?",             QColor("#7FFF80")}
        };
        const int labelTypeWith = 200;
        const QFont font("Comic Sans MS", 23, QFont::Bold); // Create a QFont object with desired properties
    }

    namespace FreeContent {
        const std::string path("assets/");
        const int height = 200;
    }
}