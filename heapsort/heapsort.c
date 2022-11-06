#include <stdlib.h>
#include <stdio.h>
#define MAX 5



void criaheap(int * v,int i, int f){
    int aux;
    int j;
    aux = v[i];
    j= i*2+1;

    while (j<= f)
    {
        if (j<f)
        {
            if (v[j] < v[j+1])
            {
                j++;
            }
        }

        if (aux < v[j])
        {
            v[i]= v[j];
            i = j;
            j = 2*i+1;
        }else{
            j = f+1;
        } 
        
    }
    v[i] = aux;
}

void heapsort(int *v, int N){
    int aux;
    for (int i = (N-1)/2; i >= 0; i--)
    {
        criaheap(v, i, N-1);
        //i = i-1;
    }

    for (int i = N-1; i > 0; i--)
    {
        aux = v[0];
        v[0] = v[i];
        v[i] = aux;
        criaheap(v, 0, i-1);
    }
    
    
}

int main(){
    int vet[MAX] = {2,3,4,6,1};
    
    int j;
    for(j = 0; j < MAX; j++)
    {
        printf("vet[%d]: %d\n", j+1, vet[j]);
    }
    printf("----------//----------\n");

    heapsort(vet, MAX);

    int i;
    for(i = 0; i < MAX; i++)
    {
        printf("vet[%d]: %d\n", i+1, vet[i]);
    }
    printf("----------//----------\n");
    


    return 0;
}
