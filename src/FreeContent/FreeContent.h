#pragma once

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QHBoxLayout>

#include <vector>
#include <string>

class FreeContent : public QWidget {
Q_OBJECT


public:
    //functions
    FreeContent(const std::string &path, const std::vector<QString> &pngNames, QWidget *parent = nullptr);

    FreeContent(const std::string &path, QWidget *parent = nullptr);

private:
    //functions
    static std::vector<QPixmap> loadPictures(const std::string &path, const std::vector<QString> &pngNames);

    bool showPictures(const std::vector<QPixmap> images);

    static std::vector<QString> getNamesFromDirectory(const std::string &path);

private:
    //variables
    std::vector<QLabel *> pictures;
    QHBoxLayout *layout;

};
