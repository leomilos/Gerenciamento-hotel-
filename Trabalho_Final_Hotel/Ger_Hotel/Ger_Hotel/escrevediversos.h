#ifndef ESCREVERESERVA_H
#define ESCREVERESERVA_H
#include <iostream>
#include <fstream>
#include <ostream>
#include <QString>
using namespace std;

class escreveD {

    private:
        ofstream arquivo;
    public:
        void add(QString b){
            arquivo.open("reservasD.txt",ios::app);
            string a;
            a=b.toStdString();
            a+='\r';
            a+='\n';
            arquivo << a << "\r";
            arquivo.close();
        }

};
#endif // ESCREVERESERVA_H
