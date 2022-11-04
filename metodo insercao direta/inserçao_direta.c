#include<stdio.h>
#include<stdlib.h>
#define MAX 5


void inserdireta(int *vet){
    int i, j, aux;

    for ( i = 0; i < MAX; i++)
    {
        aux = vet[i];
        j=i-1;
        while (j>=0 && aux < vet[j])
        {
            vet[j+1]=vet[j];
            j--;
        }
        if (j != i-1)
        {
            vet[j+1] = aux;
        }
        
    }
    
}



int main(){

    int vet[MAX] = {7,3,1,6,5};
     for (int i = 0; i < MAX; i++)
    {
        printf("%d",vet[i]);
    }

    printf("\n-----------\n");

    inserdireta(vet);
    
    for (int i = 0; i < MAX; i++)
    {
        printf("%d",vet[i]);
    }

    return 0;
}
