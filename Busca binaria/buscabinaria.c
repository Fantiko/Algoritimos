#include<stdio.h>
#include<stdlib.h>

int buscaBinaria(int *V, int k, int inicio, int fim){
    int meio;
    if(inicio>fim){
        return -1;
    }
    meio = (inicio+fim)/2;
    if(V[meio]==k){
        return meio;
    }else if(V[meio]>k){
        return buscaBinaria(V, k, inicio, meio-1);
    }else{
        return buscaBinaria(V, k, meio+1, fim);
    }
}


int main()
{
    int pos;
    int Vetor[N] = {2, 3, 8, 4, 7};
    //pos = Procurar(Vetor, 2);
    
    if(pos == -1){
        printf("elemento nao encontrado\n");
    }else{
        printf("elemento encontrado na posicao %d\n", pos);
    }
    
    ImprimirVetor(Vetor);
    
    return 0;
}