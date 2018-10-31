#ifndef LES_H
#define LES_H
#include <iostream>
#include <fstream>
#include <ostream>
#include <QString>
#define MAX 100
#include "pessoa.h"
#include "reservas.h"
#include "menu.h"
using namespace std;

class LES{

private:
     int i = 0;
     int j = 0;

 public:

     int n;
     int m =0;
     Pessoa agenda[100];
     reservas r[100];

     LES(): n(0){
     }
     bool insere(Pessoa p){
         if(n == MAX){
             return false;
         }
         for(i;i < n ;i++){
         }
         agenda[i] = p;
         n++;
     }

     bool insereReserva(reservas re){
         if(m == MAX){
             return false;
         }
         for(j;j < m ;j++){
         }
         r[j] = re;
         m++;
     }

     int getTamanho(){
         return m;
     }

     reservas buscarPessoa(int i){
         return r[i];
     }

     int buscar(string cpf,string quarto,string dia,string mes){
         int i;
         for(i = 0;i<m;i++){
             if(r[i].cpf == cpf && r[i].quarto == quarto && r[i].eDia == dia && r[i].eMes == mes){
                 return i;
             }
         }
         return -1;
     }

     bool removeReserva(){
         m=0;
     }


     bool remove(int index){

         if (index < 0 || index >= m){
            return false;
         }

         for(int i=index; i<m-1; i++){
             r[i] = r[i+1];
         }
         m--;
         return  true;
     }
};

#endif // LES_H
