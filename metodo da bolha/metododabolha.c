#include<stdio.h>
#include<stdlib.h>
#define MAX 9


void ordenavet(int *vet){
    int aux;
    for (int i = MAX; i > 2; i--)
    {
        for (int j = 0; j != i; j++)
        {
            if (vet[j] > vet[j+1])
            {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;    
            }
        }
    }
}


int main(int argc, char const *argv[])
{
    int vet[MAX] = {2,4,6,7,9,1,3,5,8};
    
    ordenavet(vet);

    for (int i = 0; i < MAX; i++)
    {
        printf("%d",vet[i]);
    }
    


    return 0;
}
