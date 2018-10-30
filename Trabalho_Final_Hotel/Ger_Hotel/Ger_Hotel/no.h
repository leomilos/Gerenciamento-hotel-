#ifndef No_H
#define No_H
#include "pessoa.h"
#include <iostream>
using namespace std;
template <typename T>
class Arvore;

template <typename T>
class No{
public:
    Pessoa valor;
    int altura;
    No<Pessoa>* pai;
    No<Pessoa>* esq;
    No<Pessoa>* dir;

public:
    No(Pessoa valor): valor(valor),altura(0),pai(nullptr),esq(nullptr),dir(nullptr){

    }
    Pessoa getValor(){
        return valor;
    }

    friend class Arvore<Pessoa>;
};
#endif
