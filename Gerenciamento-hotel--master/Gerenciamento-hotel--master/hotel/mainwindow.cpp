#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "escrever.h"
#include "cadastro.h"
#include "logado.h"
#include <iostream>
#include <fstream>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    username.toStdString();
    password.toStdString();

    string cadastros;
    ifstream arquivo("teste.txt");

    string nome;
    string senha;
    string idade;
    string sexo;
    string cpf;
    while(arquivo >> nome >> senha >> idade >> sexo >> cpf){
        if(username.toStdString() == nome){
            if(password.toStdString() == senha){
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
