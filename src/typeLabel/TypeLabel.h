#pragma once

#include <QWidget>
#include <QLabel>
#include <QString>
#include <QVBoxLayout>
#include <vector>
#include <string>

class TypeLabel : public QWidget {
Q_OBJECT

    typedef std::vector<std::pair<std::string, QColor>> labelsInfoType;

public:
    //functions
    TypeLabel(int size, labelsInfoType const &labelNames, QWidget *parent = nullptr);

private:
    //functions
    bool initLables(const labelsInfoType &labelNames);


private:
    //variables
    std::vector<QLabel *> labels;
    QVBoxLayout *layout;

};
