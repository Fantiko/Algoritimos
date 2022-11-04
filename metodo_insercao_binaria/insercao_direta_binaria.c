#include<stdio.h>
#include<stdlib.h>
#define MAX 5


void inserdiBI(int *v){
    int i, j, aux, esq, dir, meio;

    for ( i = 1; i < MAX; i++)
    {
        aux = v[i];
        esq = 0;
        dir = i;
        while (esq<dir)
        {
            meio = (esq+dir)/2;

            if (v[meio]<=aux)
            {
                esq = meio+1;
            }else{
                dir = meio;
            }
            
        }
        for ( j = i; j > esq; j--)
        {
            v[j] = v[j-1];
        }
        
        v[dir] = aux;

    }
    
    
}



int main(){

    int vet[MAX] = {7,3,1,6,5};
     for (int i = 0; i < MAX; i++)
    {
        printf("%d",vet[i]);
    }

    printf("\n-----------\n");

    inserdiBI(vet);
    
    for (int i = 0; i < MAX; i++)
    {
        printf("%d",vet[i]);
    }

    return 0;
}
