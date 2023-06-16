#include "TypeLabel.h"


TypeLabel::TypeLabel(int size, const std::vector<std::pair<std::string, QColor>> &labelNames, QWidget *parent)
        : QWidget(parent) {
    layout = new QVBoxLayout(this);
    this->setFixedWidth(300);

    for (auto const &type: labelNames) {
        auto label = new QLabel(QString::fromStdString(type.first), this);
        QPalette palette = label->palette(); // Get the current palette
        palette.setColor(QPalette::Window, type.second); // Set the color
        label->setAutoFillBackground(true);
        label->setPalette(palette); // Apply the modified palette
        layout->addWidget(label);
        labels.push_back(label);
    }
}
