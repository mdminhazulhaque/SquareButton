#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowTitle("SquareButton");

    connect(ui->bExit, SIGNAL(clicked()), this, SLOT(close()));
}

Dialog::~Dialog()
{
    delete ui;
}
