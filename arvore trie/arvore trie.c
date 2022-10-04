#include<stdio.h>       

typedef struct Nolista{
    int p, l, c;
    struct Nolista *prox;
}NoLista;

typedef struct notrie {
    struct Nolista *ocorr;
    struct notrie * v[256];
};



void main(){



}