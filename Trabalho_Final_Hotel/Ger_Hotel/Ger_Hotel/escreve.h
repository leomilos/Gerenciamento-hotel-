#ifndef ESCREVER_H
#define ESCREVER_H
#include <iostream>
#include <fstream>
#include <ostream>
#include <QString>
using namespace std;

class escreve {
    private:
        ofstream arquivo;
    public:
        void add(QString b){
            arquivo.open("test.txt",ios::app);
            string a;
            a=b.toStdString();
            a+='\r';
            a+='\n';
            arquivo << a << "\r";
            arquivo.close();
        }
        void limparArquivo(){
            arquivo.open("teste.txt");
            arquivo << "";
        }

};

#endif // ESCREVER_H
