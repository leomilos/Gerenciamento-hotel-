#include "cadastro.h"
#include "ui_cadastro.h"
#include "escrever.h"
#include <iostream>
escreve arquivo;

cadastro::cadastro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cadastro)
{
    ui->setupUi(this);
}

cadastro::~cadastro()
{
    delete ui;
}

void cadastro::on_pushButton_clicked()
{
   QString a=ui->Nome->text();
   arquivo.add(a);
   a=ui->Sobrenome->text();
   arquivo.add(a);
   a=ui->Cpf->text();
   arquivo.add(a);
   a=ui->Sexo->text();
   arquivo.add(a);
   a=ui->Idade->text();
   arquivo.add(a);
}
