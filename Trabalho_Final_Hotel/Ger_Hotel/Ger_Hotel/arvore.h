#ifndef Arvore_H
#define Arvore_H
#include <iostream>
#include <queue>
#define  MAX(a,b) (((a>b)) ? (a) : (b))
using namespace std;
#include "No.h"
template <typename T>
#include "pessoa.h"
class Arvore{
private:
    No<Pessoa>* raiz;
    int n;
    void destroi(No<Pessoa>* i){
        No<Pessoa>* atual=raiz;
        queue<No<Pessoa>*    >fila;
        fila.push(atual);
        while(!fila.empty()){
            atual=fila.front();
            fila.pop();
            if(atual->dir!= nullptr)
                fila.push(atual->dir);
            if(atual->esq!= nullptr)
                fila.push(atual->esq);
            delete atual;
            raiz=nullptr;
            n--;
        }
    }
    int ContaFilho(No<Pessoa>* temp){
        return (temp->dir!= nullptr)+(temp->esq!= nullptr);
    }
    No<Pessoa>* FilhoEsquerdo(No<Pessoa>* atual){
        if(atual->esq!= nullptr){
            FilhoEsquerdo(atual->esq);
        }else {
            return atual;
        }
    }

public:
    Arvore(): raiz(nullptr),n(0){

    }
    int fb(No<Pessoa>* n){
        int l,r;
        if(n->dir){
            r=n->dir->altura;
        } else{
            r=-1;
        }
        if(n->esq){
            l=n->esq->altura;
        } else{
            l=-1;
        }
        return r-l;
    }
    void left(No<Pessoa>* n){
        No<Pessoa>* x=n->dir;
        No<Pessoa>* b=x->esq;
        No<Pessoa> *y=n;
        x->esq=y;
        y->dir=b;
        if(b!= nullptr)
            b->pai=y;
        if(n== raiz){
            raiz=x;
            x->pai=n->pai;
        }else {
            if(y->pai->dir==y)
                y->pai->dir=x;
            else
                y->pai->esq=x;
            x->pai = y->pai;


        }
        int temp=x->altura;
        x->altura=y->altura;
        y->altura=temp;
        y->pai=x;
    }
    void right(No<Pessoa>* n){
        No<Pessoa>* y=n->esq;
        No<Pessoa>* b=y->dir;
        No<Pessoa> *x=n;
        y->dir=x;
        x->esq=b;
        if(b!= nullptr)
            b->pai=x;
        if(x== raiz){
            raiz=y;
            y->pai=x->pai;

        }else {
            if(x->pai->esq==x)
                x->pai->esq=y;
            else
                x->pai->dir=y;
            y->pai = x->pai;

        }
        int temp=y->altura;
        y->altura=x->altura;
        x->altura=temp;
        x->pai=y;
    }

    bool insere(Pessoa valor){
        No<Pessoa>* novo = new No<Pessoa>(valor);
        if(!novo){
            return false;
        }
        No<Pessoa>* atual=raiz;
        No<Pessoa>* anterior= nullptr;
        while (atual){
            anterior=atual;

            if(valor.getSCPF()<=atual->valor.getSCPF()){
                atual=atual->esq;
            } else{
                atual=atual->dir;
            }
        }
        novo->pai=anterior;
        if(anterior) {
            if (valor.getSCPF() <= anterior->valor.getSCPF()) {
                anterior->esq=novo;
            } else{
                anterior->dir=novo;
            }
            anterior->altura=novo->altura+1;
            while(anterior->pai){
                anterior->pai->altura=anterior->altura+1;
                anterior=anterior->pai;
            }
        } else{
            raiz=novo;
        }
        n++;
        balanceie(novo);
        return true;
    }
    void balanceie(No<Pessoa>* n){
        while(n!= nullptr) {
            if (fb(n) >= 2) {
                if (fb(n->dir) < 0) {
                    right(n->dir);

                }
                left(n);
            } else if (fb(n) <= -2) {
                if (fb(n->esq) > 0) {
                    left(n->esq);
                }
                right(n);
            }

            n = n->pai;
        }
    }
    No<Pessoa>* busca(string temp){
        if(raiz->valor.getSCPF()==temp){
            return raiz;
        }
        No<Pessoa>* atual=raiz;
        while(atual->valor.getSCPF()!=temp){
            if(temp<atual->valor.getSCPF()){
                atual=atual->esq;
            }else{
                atual=atual->dir;
            }
            if(atual==nullptr){
                break;
            }
        }

        return atual;
    }
    Pessoa buscaCPF(string temp){
        if(raiz->valor.getSCPF()==temp){
            return raiz->valor;
        }
        No<Pessoa>* atual=raiz;
        while(atual->valor.getSCPF()!=temp){
            if(temp<atual->valor.getSCPF()){
                atual=atual->esq;
            }else{
                atual=atual->dir;
            }
            if(atual==nullptr){
                break;
            }
        }

        return atual->valor;
    }

    bool remover(Pessoa temp){
        No<Pessoa>* atual = busca(temp);
        if(!atual){
            return false;
        }
        remove(atual);
        n--;
        return true;
    }
    void remove(No<Pessoa>* temp){

        No<Pessoa>* atual = temp;
        No<Pessoa>* anterior = temp->pai;

        int filhos = ContaFilho(atual);

        if(filhos==1){
            if(atual->dir!= nullptr){
                if(atual->pai->dir==atual){
                    atual->pai->dir=atual->dir;
                } else{
                    atual->pai->esq=atual->dir;
                }
                atual->dir->pai=atual->pai;
                delete(atual);
            } else{
                if(atual->pai->dir==atual){
                    atual->pai->dir=atual->esq;
                } else{
                    atual->pai->esq=atual->esq;
                }
                atual->esq->pai=atual->pai;
                delete(atual);

            }
        }

        if(filhos==0){
            if(atual->pai->dir==atual){
                atual->pai->dir= nullptr;
            } else{
                atual->pai->esq= nullptr;
            }

            delete(atual);
        }

        if(filhos==2){
            No<Pessoa>* esquerdo=FilhoEsquerdo(atual->dir);
            atual->valor=esquerdo->valor;
            remove(esquerdo);
        }
        if(anterior== nullptr){
            balanceie(raiz);
        }else {
            balanceie(anterior);
        }

    }
    void destruidor(){
        destroi(raiz);
    }

};

#endif
