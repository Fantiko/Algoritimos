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
        if(a->esq == NULL && a->dir == NULL){
            
            int i = 0;
            while(a->c[i] == c[i] && i < 8){  //confusao de leves aq
                i++;
            }

            int onde = strcmp(c[i], a->c[i]);  //se o onde = -1 , adiciona na esquerda, se for +1, adiciono na direita

            Arvore* nova_folha = (Arvore*)malloc(sizeof(Arvore));
            Arvore* nova_raiz = (Arvore*)malloc(sizeof(Arvore));

            if(nova_folha){
                *(nova_folha->c) = c;
                nova_folha->tipo_no = 0;
                nova_folha->esq = nova_folha->dir = NULL;
            }

            if(nova_raiz){
                nova_raiz->tipo_no = 1;
                nova_raiz->pos = i;  //qualquer coisa trocar por ++i
            }

            if(onde == -1){
                nova_raiz->esq = nova_folha;
                nova_raiz->dir = a;
            }else{
                nova_raiz->esq = a;
                nova_raiz->dir = nova_folha;
            }

        }
    }
}



int main(){
    Arvore* raiz;



    return 0;
}
