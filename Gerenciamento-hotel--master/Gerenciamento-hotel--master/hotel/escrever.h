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
        arquivo.open("teste.txt",ios::app);
        string a;
        a=b.toStdString();
        a+='\r';
        a+='\n';
        arquivo << a << "\r";
        arquivo.close();
    }

};

#endif // ESCREVER_H
