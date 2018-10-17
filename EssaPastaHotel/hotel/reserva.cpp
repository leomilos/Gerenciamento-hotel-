#include "reserva.h"
#include "ui_reserva.h"

reserva::reserva(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::reserva)
{
    ui->setupUi(this);
}

reserva::~reserva()
{
    delete ui;
}
