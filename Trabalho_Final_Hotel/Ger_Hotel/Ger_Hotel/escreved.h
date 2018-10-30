#ifndef ESCREVED_H
#define ESCREVED_H


#include <fstream>
#include <ostream>
#include <QString>
using namespace std;

class escreveD {
    private:
        ofstream arquivo;
    public:
        void add(QString b){
            arquivo.open("reservaD.txt",ios::app);
            string a;
            a=b.toStdString();
            a+='\r';
            a+='\n';
            arquivo << a << "\r";
            arquivo.close();
        }

};





#endif // ESCREVED_H
