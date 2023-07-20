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
        : FreeContent(path, getPathFromDirectory(path), parent) {}

std::vector<QPixmap> FreeContent::loadPictures(const std::string &path, const std::vector<QString> &pngNames) {

    std::vector<QPixmap> images;

    std::for_each(pngNames.begin(), pngNames.end(), [&](QString const &name) {
        QPixmap pixmap(name);
        if (pixmap.isNull()) {
            return;
        }
        images.push_back(pixmap);
    });
    if (images.empty())
        qDebug() << "Pixmap vector is empty";

    return images;
}

std::vector<QString> FreeContent::getPathFromDirectory(const std::string &path) {
    std::vector<QString> names;
    QDir directory(path.c_str());
    QFileInfoList fileList = directory.entryInfoList();

    // Iterate over the file list
            foreach (const QFileInfo &fileInfo, fileList) {
            names.push_back(fileInfo.filePath());
        }
    if (names.empty())
        qDebug() << "path vector is empty";
    return names;
}

bool FreeContent::showPictures(const std::vector<QPixmap> images) {
    std::for_each(images.begin(), images.end(), [&](auto const &img) {
        auto label = new ClickableLabel("", this);
        label->setPixmap(img);
        label->resize(img.size());
        label->show();
        pictures.push_back(label);
    });
    return false;
}
