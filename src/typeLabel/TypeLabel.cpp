#include "TypeLabel.h"


TypeLabel::TypeLabel(int size, const labelsInfoType &labelNames, QWidget *parent)
        : QWidget(parent) {
    layout = new QVBoxLayout(this);
    this->setFixedWidth(size);

    initLables(labelNames);

}

bool TypeLabel::initLables(const labelsInfoType &labelNames) {
    for (auto const &type: labelNames) {

        //create label
        auto label = new QLabel(QString::fromStdString(type.first), this);

        //colorize label
        QPalette palette = label->palette(); // Get the current palette
        palette.setColor(QPalette::Window, type.second); // Set the color
        label->setAutoFillBackground(true);
        label->setPalette(palette); // Apply the modified palette

        //add label to Layout
        layout->addWidget(label);

        //add label to vector for later access
        labels.push_back(label);
    }
}
