#ifndef ESCREVERESERVA_H
#define ESCREVERESERVA_H    
#include <iostream>
#include <fstream>
#include <ostream>
#include <QString>
using namespace std;

class escreveReserva {
    private:
        ofstream arquivo;
    public:
        void add(QString b){
            arquivo.open("reservas.txt",ios::app);
            string a;
            a=b.toStdString();
            a+='\r';
            a+='\n';
            arquivo << a << "\r";
            arquivo.close();
        }
        void limparArquivo2(){
           arquivo.open("reservas.txt",ios::out);
           arquivo<<"";
           arquivo.close();
        }

        void limparArquivo(QString cpf,QString quarto,QString edia,QString emes,QString eano,QString sdia,QString smes,QString sano){
            arquivo.open("reservas.txt",ios::app);
            string a;
            a=cpf.toStdString() + "\n"+"\r" + quarto.toStdString() + "\n"+"\r" + edia.toStdString() + "\n"+"\r" + emes.toStdString() + "\n"+"\r" + eano.toStdString() + "\n"+"\r"+ sdia.toStdString() + "\n"+"\r"+ smes.toStdString() + "\n"+"\r"+ sano.toStdString() + "\n"+"\r";
            arquivo << a << "\r";
            arquivo.close();
        }

};
#endif // ESCREVERESERVA_H
