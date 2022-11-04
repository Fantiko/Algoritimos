#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void ordenaSD(int vet[]){
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

void MSD(int vet[]){
    int i, j, posmenor, aux;

    for  (i = 0; i < MAX; i++){
        posmenor=i;
        for (j = i+1; j < MAX-1; j++){
            if (vet[j]< vet[posmenor]){
                posmenor = j;
            }
        }    
        aux = vet[i];
        vet[i]= vet[posmenor];
        vet[posmenor]= aux;
    }
    
}

void selection_sort(int num[], int tam) { 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) 
         min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
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
    selection_sort(vet, MAX);
    int i;
    for(i = 0; i < MAX; i++)
    {
        printf("vet[%d]: %d\n", i+1, vet[i]);
    }
    printf("----------//----------\n");
    


    return 0;
}
