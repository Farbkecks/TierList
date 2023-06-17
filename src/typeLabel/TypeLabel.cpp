#include "TypeLabel.h"


TypeLabel::TypeLabel(int size, labelsInfoType const &labelNames, const QFont &font, QWidget *parent)
        : QWidget(parent) {
    layout = new QVBoxLayout(this);
    this->setFixedWidth(size);

    initLables(labelNames, font);

}

bool TypeLabel::initLables(const labelsInfoType &labelNames, const QFont &font) {
    for (auto const &type: labelNames) {

        //create label
        auto label = new QLabel(QString::fromStdString(type.first), this);

        //colorize label
        QPalette palette = label->palette(); // Get the current palette
        palette.setColor(QPalette::Window, type.second); // Set the background color
        palette.setColor(QPalette::WindowText, Qt::black); // Set the text color
        label->setAutoFillBackground(true);
        label->setWordWrap(true); // Enable automatic word wrapping
        label->setPalette(palette); // Apply the modified palette

        //center the text
        label->setAlignment(Qt::AlignCenter);

        label->setFont(font); // Set the font of the label

        //add label to Layout
        layout->addWidget(label);

        //add label to vector for later access
        labels.push_back(label);
    }
    return true;
}
