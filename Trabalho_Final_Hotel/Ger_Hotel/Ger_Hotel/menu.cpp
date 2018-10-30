#include "menu.h"
#include "ui_menu.h"
#include "reservas.h"
#include "escrevereserva.h"
#include "reservaquarto.h"
#include "reservasdiversas.h"
#include "reservadiversas.h"
#include "escreved.h"
#include "les.h"
#include "fila.h"

LES les;
Fila fila;

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);;
    lerPainelQuarto();
    lerDiversos();
}

menu::~menu()
{
    delete ui;
}

//Reserva Quartos

void menu::on_btnReservar_clicked()
{
    reservaQuarto *rq = new reservaQuarto(this);
    rq->show();
    connect(rq,SIGNAL(mandaQuarto(QString,QString,QString,QString,QString,QString,QString)),this,SLOT(recebeReserva(QString,QString,QString,QString,QString,QString,QString)));
}

void menu::recebe(QString nome,QString senha,QString idade,QString sexo,QString cpf){

    ui->txtNome->setText(nome);
    ui->txtSenha->setText(senha);
    ui->txtIdade->setText(idade);
    ui->txtSexo->setText(sexo);
    ui->txtCpf->setText(cpf);
    escrevePainel();
    escreveDiversosPainel();

}

void menu::recebeReserva(QString quarto,QString eDia,QString eMes,QString eAno,QString sDia,QString sMes,QString sAno){

    escreveReserva r;
    r.add(ui->txtCpf->text());
    r.add(quarto);
    r.add(eDia);
    r.add(eMes);
    r.add(eAno);
    r.add(sDia);
    r.add(sMes);
    r.add(sAno);
    ui->listWidget->addItem("Quarto:");
    ui->listWidget->addItem(quarto);
    ui->listWidget->addItem("Entrada:");
    ui->listWidget->addItem(eDia+"/"+eMes+"/"+eAno);
    ui->listWidget->addItem("Saida:");
    ui->listWidget->addItem(sDia+"/"+sMes+"/"+sAno);


}

void menu::lerPainelQuarto(){
    ui->listWidget->clear();
    reservas a;
    ifstream arquivo("reservas.txt");
    while(arquivo >> a.cpf>>a.quarto>>a.eDia>>a.eMes>>a.eAno>>a.sDia>>a.sMes>>a.sAno){
        les.insereReserva(a);
    }
}

void menu::escrevePainel(){    

    reservas b;
    int n = les.getTamanho();
    for(int i = 0;i<n;i++){
        b = les.buscarPessoa(i);
        if(b.cpf == ui->txtCpf->text().toStdString()){
            QString cpf = QString::fromStdString(b.cpf);
            QString quarto = QString::fromStdString(b.quarto);
            QString eDia = QString::fromStdString(b.eDia);
            QString eMes = QString::fromStdString(b.eMes);
            QString eAno = QString::fromStdString(b.eAno);
            QString sDia = QString::fromStdString(b.sDia);
            QString sMes = QString::fromStdString(b.sMes);
            QString sAno = QString::fromStdString(b.sAno);
            ui->listWidget->addItem("Quarto:");
            ui->listWidget->addItem(quarto);
            ui->listWidget->addItem("Entrada:");
            ui->listWidget->addItem(eDia+"/"+eMes+"/"+eAno);
            ui->listWidget->addItem("Saida:");
            ui->listWidget->addItem(sDia+"/"+sMes+"/"+sAno);
            ui->listWidget->addItem("______________________");
        }
    }

}

void menu::on_btnSair_clicked()
{
    les.removeReserva();
    fila.removerFila();
    close();
}

//Reserva Diversos

void menu::on_btnReservaDiversos_clicked()
{
    reservasDiversas *rd = new reservasDiversas(this);
    rd->show();
    connect(rd,SIGNAL(mandaDiverso(QString)),this,SLOT(recebeDiversos(QString)));

}

void menu::recebeDiversos(QString tipo){

    string tipos = tipo.toStdString();
    reservaD a;
    int n = 1;
    ifstream arquivo("reservaD.txt");
    while(arquivo >> a.cpf>>a.tipo>>a.senhaFila){
        if(a.tipo == tipos){
            n++;
        }
    }

    QString senha = QString::number(n);
    escreveD r;
    r.add(ui->txtCpf->text());
    r.add(tipo);
    r.add(senha);
    ui->listWidget_2->addItem("Reserva:");
    ui->listWidget_2->addItem(tipo);
    ui->listWidget_2->addItem("Senha:");
    ui->listWidget_2->addItem(senha);
    ui->listWidget_2->addItem("______________________");


}

void menu::lerDiversos(){

    reservaD a;
    ifstream arquivo("reservaD.txt");
    while(arquivo >> a.cpf>>a.tipo>>a.senhaFila){
        fila.inserir(a);
    }
}

void menu::escreveDiversosPainel(){

    reservaD b;
    int n = fila.retornaN();
    for(int j=fila.retornaI();j!=fila.retornaF();j=((j+1)%n)){
        b = fila.imprimir(j);
        if(b.cpf == ui->txtCpf->text().toStdString()){
            QString tipo = QString::fromStdString(b.tipo);
            QString senha = QString::fromStdString(b.senhaFila);
            ui->listWidget_2->addItem("Reserva:");
            ui->listWidget_2->addItem(tipo);
            ui->listWidget_2->addItem("Senha:");
            ui->listWidget_2->addItem(senha);
            ui->listWidget_2->addItem("______________________");
        }
    }
}

