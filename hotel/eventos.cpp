#include "eventos.h"
#include "ui_eventos.h"

eventos::eventos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::eventos)
{
    ui->setupUi(this);
}

eventos::~eventos()
{
    delete ui;
}
