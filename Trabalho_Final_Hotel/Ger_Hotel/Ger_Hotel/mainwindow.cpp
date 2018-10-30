#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <stdio.h>
#include "cadastro.h"
#include "pessoa.h"
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <qapplication.h>
#include <qfile.h>
#include <QMessageBox>
#include <QTextStream>
#include <QVector>
#include "menu.h"
#include "escreve.h"
#include "les.h"
#include "Arvore.h"
Arvore<Pessoa> c;



using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    leitura();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCadastrar_clicked()
{

    Cadastro *cadastro = new Cadastro(this);
    cadastro->show();
    connect(cadastro,SIGNAL(mandaPessoa(QString,QString,QString,QString,QString)),this,SLOT(recebeUsuario(QString,QString,QString,QString,QString)));

}

void MainWindow::recebeUsuario(QString nome,QString senha,QString idade,QString sexo,QString cpf){

    escreve a;
    a.add(nome);
    a.add(senha);
    a.add(idade);
    a.add(sexo);
    a.add(cpf);

}

void MainWindow::on_btnLogar_clicked()
{
    c.destruidor();
    leitura();
    QString CPF = ui->txtNome->text();
    QString senha = ui->txtSenha->text();
    Pessoa a;
    string cpf = CPF.toStdString();
    string senha2 = senha.toStdString();

    a=c.buscaCPF(cpf);
    if(a.getSSenha()==senha2){
        menu *m = new menu(this);
        m->show();
        QString Sexo,idade,nome;
        nome = QString::fromStdString(a.getSNome());
        idade = QString::fromStdString(a.getSIdade());
        Sexo = QString::fromStdString(a.getSSexo());
        connect(this,SIGNAL(manda(QString,QString,QString,QString,QString)),m,SLOT(recebe(QString,QString,QString,QString,QString)));
        emit manda(nome,senha,idade,Sexo,CPF);
    }

}

void MainWindow::leitura(){

    Pessoa a;
    ifstream arquivo("test.txt");
        while(arquivo >> a.snome >> a.ssenha >> a.sidade >> a.ssexo >> a.scpf){
               c.insere(a);

        }

}




