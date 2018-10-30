#ifndef PESSOA_H
#define PESSOA_H
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>

using namespace std;

class Pessoa
{
public:

    Pessoa();
    Pessoa(QString,QString,QString,QString,QString);
    QString getNome();
    QString getSenha();
    QString getIdade();
    QString getSexo();
    QString getCPF();
    void setNome(QString);
    void setSenha(QString);
    void setIdade(QString);
    void setSexo(QString);
    void setCPF(QString);
    string getSNome();
    string getSSenha();
    string getSIdade();
    string getSSexo();
    string getSCPF();
    void setSNome(string);
    void setSSenha(string);
    void setSIdade(string);
    void setSSexo(string);
    void setSCPF(string);
    string snome;
    string ssenha;
    string sidade;
    string ssexo;
    string scpf;

private:

    QString nome;
    QString senha;
    QString sexo;
    QString idade;
    QString cpf;


};

#endif // PESSOA_H
