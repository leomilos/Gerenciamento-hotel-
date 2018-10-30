#include "cadastro.h"
#include "ui_cadastro.h"
#include "pessoa.h"

Cadastro::Cadastro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);
}

Cadastro::~Cadastro()
{
    delete ui;
}
void Cadastro::on_btnCadastrar_clicked()
{

    QString nome,senha,idade,sexo,cpf;
    nome = ui->txtNome->text();
    senha = ui->txtSenha->text();
    idade = ui->txtIdade->text();
    sexo = ui->txtSexo->text();
    cpf = ui->txtCpf->text();
    emit mandaPessoa(nome,senha,idade,sexo,cpf);
    close();

}


