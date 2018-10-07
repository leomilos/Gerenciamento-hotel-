#ifndef PESSOA_H
#define PESSOA_H
#include "mainwindow.h"
#include "logado.h"
#include "cadastro.h"
#include "escrever.h"
#include <iostream>
#include <fstream>
#include <ostream>
#include <QString>

using namespace std;

class pessoa{
    public:
        string nome;
        string senha;
        string idade;
        string sexo;
        string cpf;
        string agenda[500];
        int n = 0;
        int p = 0;

        void agendar(){

            ifstream arquivo("teste.txt");

            while(arquivo >> nome >> senha >> idade >> sexo >> cpf){
                agenda[n] = nome;
                n++;
                agenda[n] = senha;
                n++;
                agenda[n] = idade;
                n++;
                agenda[n] = sexo;
                n++;
                agenda[n] = cpf;
                n++;
                p++;
            }
        }
        /*
        void preencher(QString username, QString password){

            ifstream arquivo("teste.txt");


            while(arquivo >> nome >> senha >> idade >> sexo >> cpf){
                if(username.toStdString() == nome){
                    if(password.toStdString() == senha){
                        logado *Logado = new logado(this);
                        Logado->show();
                    }

                }
            }


        };
        */
    private:





};

#endif // PESSOA_H
