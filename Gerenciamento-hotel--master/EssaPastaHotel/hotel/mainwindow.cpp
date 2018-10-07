#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "escrever.h"
#include "cadastro.h"
#include "logado.h"
#include "pessoa.h"
#include <iostream>
#include <fstream>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pessoa a;
    a.agendar(); //passa os atributos das pessoas cadastradas para um vetor estatico


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    pessoa b;
    //b.preencher(username, password);

    string cadastros;
    ifstream arquivo("teste.txt");



    while(arquivo >> b.nome >> b.senha >> b.idade >> b.sexo >> b.cpf){
        if(username.toStdString() == b.nome){
            if(password.toStdString() == b.senha){
                logado *Logado = new logado(this);
                Logado->show();
            }

        }
    }



}

void MainWindow::on_pushButton_2_clicked()
{
    cadastro *Cadastro =new cadastro(this);
    Cadastro->show();
}
