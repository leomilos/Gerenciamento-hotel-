#include "logado.h"
#include "ui_logado.h"

logado::logado(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::logado)
{
    ui->setupUi(this);
}

logado::~logado()
{
    delete ui;
}
