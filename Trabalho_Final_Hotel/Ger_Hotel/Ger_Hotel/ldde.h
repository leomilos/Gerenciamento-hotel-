#ifndef LDDE_H
#define LDDE_H
#include "no.h"

class LDDE{
    private:
        int n;
        No* primeiro;
        No* ultimo;
    public:
        LDDE():n(0),primeiro(nullptr){
        }
        bool insere(ReservaDiversas rd){

            No* novo = new No(rd);

            if(novo == nullptr){
                return false;
            }

            No* aptAnterior = nullptr;
            No* atual = primeiro;

            while(atual && rd > atual->r){
                aptAnterior = atual;
                atual = atual->proximo;
            }
            novo->proximo = atual;


            if(atual==nullptr){
                ultimo = novo;
            }

            if(aptAnterior != nullptr){
                aptAnterior->proximo = novo;
                novo->anterior = aptAnterior;
                //cout<<"entra if"<<endl;
            }else{
                primeiro = novo;
                //cout<<"Entra else"<<endl;
            }
            return true;
            n++;
        }

        bool remove(int valor){
            No* aptAnterior = nullptr;
            No* atual = primeiro;
            while(atual && valor != atual->v){
                aptAnterior = atual;
                atual = atual->proximo;
            }
            if(!atual)
                return false;

            if(aptAnterior==nullptr){
                primeiro = atual->proximo;
                primeiro->anterior = nullptr;
                delete(atual);
                n--;
                return true;
            }
            if(atual->proximo == nullptr){
                ultimo = atual->anterior;
                ultimo->proximo = nullptr;
                delete(atual);
                n--;
                return true;
            }

            aptAnterior->proximo = atual->proximo;
            atual->proximo->anterior = aptAnterior;
            delete(atual);
            n--;
            return true;

        }


        void imprime(){
            No* atual = primeiro;
            while(atual){
                cout << atual->v << " ";
                atual = atual->proximo;
            }
            cout << endl;
        }

};




#endif // LDDE_H
