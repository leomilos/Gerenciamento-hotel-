#include "quartos.h"
#include "ui_quartos.h"

quartos::quartos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::quartos)
{
    ui->setupUi(this);
}

quartos::~quartos()
{
    delete ui;
}
