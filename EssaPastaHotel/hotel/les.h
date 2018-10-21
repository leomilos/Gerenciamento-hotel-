
#ifndef LES_H
#define LES_H
#include <iostream>
#include <fstream>
#include <ostream>
#include <QString>
#define MAX 100
#include "pessoa.h"
using namespace std;

class LES{
    private:
        int i = 0;

    public:

        int n;
        pessoa agenda[100];

        LES(): n(0){
        }

        bool insere(pessoa p){

            if(n == MAX){
                return false;
            }

            // agenda[i].cpf < p.cpf evitar o cadastro de dois cpfs iguais

            for(i;i < n ;i++){
            }

            agenda[i] = p;
            n++;

        }

        bool buscar(string valor){
            int i = 0;


            while(i != n && agenda[i].cpf != valor){
                i++;
            }


            if(i == n){
                return false;
            }

            else{
                return i;
            }
        }

        bool remove(string valor){

            int a = this->buscar(valor);
            if(a == n){
                return false;
            }
            else{
                int i;
                    for(i = a; i < n; i++){
                        agenda[i] = agenda[i + 1];
                    }
                    n--;
                    return true;
                }
        }
};




#endif
