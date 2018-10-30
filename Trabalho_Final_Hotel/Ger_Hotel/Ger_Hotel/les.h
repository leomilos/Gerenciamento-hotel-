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

     bool buscar(string valor){
         int i = 0;
         while(i != n && agenda[i].getSCPF()!= valor){
             i++;
         }
         if(i == n){
             return false;
         }
         else{
             return i;
         }
     }

     bool removeReserva(){
         m=0;
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

#endif // LES_H
