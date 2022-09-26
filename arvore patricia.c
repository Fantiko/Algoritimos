#include <stdlib.h>
#include <stdio.h>
#include<string.h>

typedef struct NO_pat{
    int tipo_no;//== 1 intermediario , == 0 folha
    int pos;//posiçao de diferença
    char c[8];//conteudo
    struct NO_pat* esq;
    struct NO_pat* dir;
}Arvore;

Arvore* CriarVazia(){
    return NULL;
}



Arvore* insere(Arvore*a, char c[8]){
    if(estavazia(a)){
        a = malloc(sizeof(Arvore));
        a->pos=0;
        a->c[8] = c[8];
        a->tipo_no = 0;
        a->esq = a->dir = NULL;
    }else{
        if(v < a->info){
            a->esq = insere(a->esq, v);
        }else{
            a->dir = insere(a->dir, v);
        }
        return a;
    }
}



int main(){
    Arvore* raiz;



    return 0;
}
