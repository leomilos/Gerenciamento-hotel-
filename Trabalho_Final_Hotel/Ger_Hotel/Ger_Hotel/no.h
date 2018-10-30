#ifndef NO_H
#define NO_H
#include "mainwindow.h"
#include "reservadiversas.h"

using namespace std;
class No{
    private:
        ReservaDiversas r;
        No* proximo;
        No* anterior;
        No(ReservaDiversas r) : r(r),proximo(nullptr),anterior(nullptr){

        }
    public:
        ~No(){
        }
    friend class LDDE;

};

#endif // NO_H
