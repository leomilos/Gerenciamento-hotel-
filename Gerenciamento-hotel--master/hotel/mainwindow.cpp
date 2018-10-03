#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "escrever.h"
#include "cadastro.h"
#include <iostream>

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
     escreve arquivo;
     QString a= ui->lineEdit->text();
     arquivo.add(a);


}

void MainWindow::on_pushButton_2_clicked()
{
    cadastro *Cadastro =new cadastro(this);
    Cadastro->show();
}
