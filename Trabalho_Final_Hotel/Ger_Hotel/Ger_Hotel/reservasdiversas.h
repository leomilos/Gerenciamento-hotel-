#ifndef RESERVASDIVERSAS_H
#define RESERVASDIVERSAS_H
#include "mainwindow.h"

#include <QMainWindow>

namespace Ui {
class reservasDiversas;
}

class reservasDiversas : public QMainWindow
{
    Q_OBJECT

public:
    explicit reservasDiversas(QWidget *parent = nullptr);
    ~reservasDiversas();

private slots:
    void on_btnReservar_clicked();

signals:
    void mandaDiverso(QString);
private:
    Ui::reservasDiversas *ui;
};

#endif // RESERVASDIVERSAS_H
