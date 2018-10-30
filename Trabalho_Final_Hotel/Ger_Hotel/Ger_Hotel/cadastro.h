#ifndef CADASTRO_H
#define CADASTRO_H
#include "pessoa.h"
#include <QMainWindow>
#include <QVector>

namespace Ui {
class Cadastro;
}

class Cadastro : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();
    void setPessoa(QString,QString,QString,QString,QString);
    int getN();
    void setN(int);
    QVector<Pessoa*> getVectorPessoa();

private slots:
    void on_btnCadastrar_clicked();

private:
    Ui::Cadastro *ui;
    QVector<Pessoa*>pVector;
    int n=0;

signals:
    void mandaPessoa(QString nome,QString senha,QString idade,QString sexo,QString cpf);

};

#endif // CADASTRO_H
