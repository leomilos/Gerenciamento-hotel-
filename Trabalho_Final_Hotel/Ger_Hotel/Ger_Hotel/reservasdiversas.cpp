#include "reservasdiversas.h"
#include "ui_reservasdiversas.h"

reservasDiversas::reservasDiversas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::reservasDiversas)
{
    ui->setupUi(this);
}

reservasDiversas::~reservasDiversas()
{
    delete ui;
}




void reservasDiversas::on_btnReservar_clicked()
{
    if(ui->rbAcademia->isChecked()){
        emit mandaDiverso("Academia");
    }else if (ui->rbLavanderia->isChecked()) {
        emit mandaDiverso("Lavanderia");
    }else if(ui->rbRestaurante->isChecked()){
        emit mandaDiverso("Restaurante");
    }else if(ui->rbMassagem->isChecked()){
        emit mandaDiverso("Massagem");
    }
    close();
}
