#ifndef MOSTRAR_H
#define MOSTRAR_H

#include <QDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastro.h"
#include "mainwindow.h"

#include "mostrar.h"

namespace Ui {
class Mostrar;
}

class Mostrar : public QDialog
{
    Q_OBJECT

public:
    explicit Mostrar(QWidget *parent = 0);
    ~Mostrar();

private slots:
    void on_pushButton_clicked();
    void recebe(QString,QString,QString);

private:
    Ui::Mostrar *ui;
};

#endif // MOSTRAR_H
