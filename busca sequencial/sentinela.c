#include <stdio.h>
#include <stdlib.h>

#define N 5

int Procurar(int vetor[N], int chave);
void MoverParaCima(int vetor[N], int index);
void ImprimirVetor(int vetor[N]);


int main()
{
    int pos;
    int Vetor[N] = {2, 3, 8, 4, 7};
    pos = Procurar(Vetor, 4);
    
    if(pos == -1){
        printf("elemento nao encontrado\n");
    }else{
        printf("elemento encontrado na posicao %d\n", pos);
    }
    
    ImprimirVetor(Vetor);
    
    return 0;
}

int Procurar(int vetor[N], int chave)
{
    for(int i=0; i < N; i++)
    {
        if(vetor[i] == chave)
        {
            MoverParaCima(vetor, i);
            return i;
        }
    }

    return -1;
}

void MoverParaCima(int vetor[N], int index)
{
    int tempElemento = vetor[index];
    
    for(int i = index; i >= 0; i--)
    {
        vetor[i] = vetor[i-1];
    }
    
    vetor[0] = tempElemento;
}

void ImprimirVetor(int vetor[N])
{
    for(int i=0; i < N; i++)
    {
        printf("Index: %d - %d\n", i, vetor[i]);
    }
}