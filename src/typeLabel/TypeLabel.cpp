#include "TypeLabel.h"

TypeLabel::TypeLabel(int width, int height, std::vector<std::string> labelNames, QWidget *parent)
        : QWidget(parent), size(width, height) {
    labelNames = labelNames;
}
