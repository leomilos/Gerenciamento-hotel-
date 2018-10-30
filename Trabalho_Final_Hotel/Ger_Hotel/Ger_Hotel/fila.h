#ifndef FILA_H
#define FILA_H
#define MAX 100
#include "mainwindow.h"
#include "reservadiversas.h"
#include "menu.h"

class Fila{
    private:

        int i=0;
        int f=0;
        int n = MAX+1;
        int cont = 0;
        reservaD v[MAX+1];

    public:
        Fila(){
        }

        bool inserir(reservaD re){
            if(((f+1)%n)==i){
                return false;
            }
            v[f] = re;
            f =(f+1)%n;
            cont++;
            return true;
        }

        int retornaI(){
            return i;
        }

        int retornaF(){
            return f;
        }

        int retornaTamanhoFila(){
            return cont;
        }

        reservaD imprimir(int i){
            return v[i];
        }

        void imprime(){
                    for(int j=i;  j!=f   ;j=((j+1)%n)){

                        //std::cout << v[j] << std::endl;
                    }
                }


        void removerFila(){
            cont=0;
            i=0;
            f=0;
        }

        int retornaN(){
            return MAX+1;
        }

        reservaD remove(reservaD *itemRemovido=nullptr){

            if(i==f){
                //return false;
            }
            reservaD temp = v[i];
            if(itemRemovido){
                *itemRemovido = temp;
            }
            cont--;
            i =(i+1)%n;
            return temp;
        }

};

#endif // FILA_H
