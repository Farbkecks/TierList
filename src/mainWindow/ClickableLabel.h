#pragma once

#include <QLabel>
#include <QMouseEvent>

class ClickableLabel : public QLabel {
Q_OBJECT

public:
    //functions
    explicit ClickableLabel(const QString &text = "", QWidget *parent = 0);

private:
    //functions

protected:
    void mousePressEvent(QMouseEvent *event) override;

private:
    //variables

};
