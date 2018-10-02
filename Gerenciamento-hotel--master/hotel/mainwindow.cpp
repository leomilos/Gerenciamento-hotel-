#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "escrever.h"
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
