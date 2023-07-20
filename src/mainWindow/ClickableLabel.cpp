#include "ClickableLabel.h"

ClickableLabel::ClickableLabel(const QString &text, QWidget *parent)
        : QLabel(text, parent) {

}

void ClickableLabel::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::RightButton) {
        qDebug() << "rechts";
    } else if (event->button() == Qt::LeftButton) {
        qDebug() << "links";
    }
}

