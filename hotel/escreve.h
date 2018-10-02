#ifndef ESCREVER_H
#define ESCREVER_H
#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;

class escreve {
private:
    ofstream arquivo;
public:
    void add(string a){
        arquivo.open("teste.txt",ios::app);
        a+='\r';
        a+='\n';
        arquivo << a << "\r";
        //cout<<a;
        arquivo.close();
    }

};

#endif // ESCREVER_H
