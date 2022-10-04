#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void ordenaSD(int vet[MAX]){
int i, j, temp;

for (i = 0; i < MAX; i++, j++){
    for ( j = 1; j < MAX; j++){
        if (vet[i]>vet[j]){
            temp = vet[j];
            vet[j] = vet[i];
            vet[i] = temp;
        }
    }
}
}

void MSD(int vet[MAX]){
    int i, j, posmenor, aux;

    for  (i = 0; i < MAX; i++){
        posmenor=i;
        for (j = i; j < MAX-1; j++){
            if (vet[j]< vet[posmenor]){
                posmenor = j;
            }
        }    
        aux = vet[i];
        vet[i]= vet[posmenor];
        vet[posmenor]= aux;
    }
    
}



int main(int argc, char const *argv[]){
    int vet[MAX] = {2,3,4,6,1};
    ordenaSD(vet[MAX]);
    for (int i = 0; i < MAX; i++)
    {
        printf("vet[%d]: %d",i, vet[i]);
    }
    


    return 0;
}
