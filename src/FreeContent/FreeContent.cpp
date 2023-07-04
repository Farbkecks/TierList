#include "FreeContent.h"
#include <algorithm>

#include <QDir>
#include <QPixmap>

#include <iostream>

FreeContent::FreeContent(const std::string &path, const std::vector<QString> &pngNames, QWidget *parent) {
    showPictures(loadPictures(path, pngNames));
    layout = new QHBoxLayout(this);
    std::for_each(pictures.begin(), pictures.end(), [&](auto const &label) {
        layout->addWidget(label);
    });
}

FreeContent::FreeContent(const std::string &path, QWidget *parent)
        : FreeContent(path, getNamesFromDirectory(path), parent) {}

std::vector<QPixmap> FreeContent::loadPictures(const std::string &path, const std::vector<QString> &pngNames) {

    std::vector<QPixmap> images;

    std::for_each(pngNames.begin() + 2, pngNames.end(), [&](auto const &name) {
        QPixmap pixmap(name);
        if (pixmap.isNull()) {
            qDebug() << "pixmap ist null";
        }
        images.push_back(pixmap);
    });
    return images;
}

std::vector<QString> FreeContent::getNamesFromDirectory(const std::string &path) {
    std::vector<QString> names;
    QDir direcotry("../../../assets");
    QFileInfoList fileList = direcotry.entryInfoList();

    // Iterate over the file list and print the file names
            foreach (const QFileInfo &fileInfo, fileList) {
            names.push_back(fileInfo.filePath());
        }
    return names;
}

bool FreeContent::showPictures(const std::vector<QPixmap> images) {
    std::for_each(images.begin(), images.end(), [&](auto const &img) {
        auto label = new QLabel("", this);
        label->setPixmap(img);
        label->resize(img.size());
        label->show();
        pictures.push_back(label);
    });
    return false;
}
