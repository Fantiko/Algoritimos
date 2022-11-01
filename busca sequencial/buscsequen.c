#include<stdio.h>
#include<stdlib.h>
#define n 5

int buscaSequencial(int *V, int k){
    int i;
    for(i=0; i<10; i++){
        if(V[i]==k){
            return i;
        }
    }
    return -1;
}

int main()
{
    int V[n], i, k, pos;
    printf("Digite os elementos do vetor: ");
    for(i=0; i<n; i++){
        scanf("%d", &V[i]);
    }
    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &k);
    pos = buscaSequencial(V, k);
    if(pos==-1){
        printf("Elemento nao encontrado!");
    }else{
        printf("Elemento encontrado na posicao %d", pos);
    }
    return 0;
}
