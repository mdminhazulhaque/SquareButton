#ifndef SQUAREBUTTON_H
#define SQUAREBUTTON_H

#include <QPushButton>

class SquareButton : public QPushButton
{
    Q_OBJECT
public:
    explicit SquareButton(QWidget *parent = 0);
    QSize sizeHint() const;

signals:

public slots:

};

#endif // SQUAREBUTTON_H
