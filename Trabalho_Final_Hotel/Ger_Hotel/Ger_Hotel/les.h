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
     int m;
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
         for(i = 0;i<n;i++){
             if(r[i].cpf == cpf && r[i].quarto == quarto && r[i].eDia == dia && r[i].eMes == mes){
                 return i;
             }
         }
         return -1;
     }

     bool removeReserva(){
         m=0;
     }

     bool remove(string cpf,string quarto,string dia,string mes){

         int a = this->buscar(cpf,quarto,dia,mes);
         if(a == n){
             return false;
         }
         else{
             int i;
                 for(i = j; i < n; i++){
                     r[i] = r[i + 1];
                 }
                 n--;
                 return true;
             }
     }
};

#endif // LES_H
