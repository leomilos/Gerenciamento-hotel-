#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <fstream>
#include <string>
#include <qfile.h>
#include <QVector>
#include <fstream>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void leitura();

private slots:

    void on_btnCadastrar_clicked();
    void recebeUsuario(QString nome,QString senha,QString idade,QString sexo,QString cpf);
    void on_btnLogar_clicked();

private:
    Ui::MainWindow *ui;

signals:
    void manda(QString,QString,QString,QString,QString);

};

#endif // MAINWINDOW_H
