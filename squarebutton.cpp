#include "squarebutton.h"

SquareButton::SquareButton(QWidget *parent) :
    QPushButton(parent)
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
}

QSize SquareButton::sizeHint() const
{
    QSize size = QPushButton::sizeHint();
    size.rwidth() = size.rheight() = qMax(size.rwidth(), size.rheight());
    return size;
}
