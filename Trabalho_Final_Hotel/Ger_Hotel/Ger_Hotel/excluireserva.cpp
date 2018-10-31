#include "excluireserva.h"
#include "ui_excluireserva.h"

excluireserva::excluireserva(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::excluireserva)
{
    ui->setupUi(this);
}

excluireserva::~excluireserva()
{
    delete ui;
}



void excluireserva::on_btnCancelaReserva_clicked()
{
    QString quarto,dia,mes,ano;
    quarto = ui->txtQuarto->text();
    dia = ui->txtDia->text();
    mes = ui->txtMes->text();
    ano = ui->txtAno->text();
    emit mandaExcluir(quarto,dia,mes,ano);
    close();

}
