#ifndef MENU_H
#define MENU_H
#include <QMainWindow>
#include <iostream>
#include "mainwindow.h"
#include "reservaquarto.h"
#include "reservas.h"
#include <QVector>


using namespace std;

namespace Ui {
class menu;
}

class menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();
    void escrevePainel();
    void escreveDiversosPainel();
    void lerPainelQuarto();
    void lerDiversos();


private:
    Ui::menu *ui;

private slots:
    void on_btnReservar_clicked();
    void recebe(QString,QString,QString,QString,QString);
    void recebeReserva(QString,QString,QString,QString,QString,QString,QString);
    void on_btnSair_clicked();
    void recebeDiversos(QString);
    void on_btnReservaDiversos_clicked();
};

#endif // MENU_H
