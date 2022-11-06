#include <stdio.h>
#include <stdlib.h>

#define tamvet 8

void merge(int *V, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;

    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;

    temp = (int *)malloc(tamanho * sizeof(int));

    if (temp != NULL){
        for (i = 0; i < tamanho; i++){
            if (!fim1 && !fim2){
                if (V[p1] < V[p2]){
                    temp[i] = V[p1++];
                }else{
                    temp[i] = V[p2++];
                }
                if (p1 > meio){
                    fim1 = 1;
                }
                if (p2 > fim){
                    fim2 = 1;
                }
            }else{
                if (!fim1){
                    temp[i] = V[p1++];
                }else{
                    temp[i] = V[p2++];
                }
            }
        }
        for (j = 0, k = inicio; j < tamanho; j++, k++){
            V[k] = temp[j];
        }       
    }
    free(temp);
}

void merge_sort(int *V, int inicio, int fim){
    int meio;
    if (inicio < fim){
        meio = (inicio + fim)/2;
        merge_sort(V, inicio, meio);
        merge_sort(V, meio + 1, fim);

        merge(V, inicio, meio, fim);  //apenas intercala 
    }
}




int main()
{
    int lacunas[] = {71, 30, 12, 57, 2, 10, 4, 1};
    merge_sort(lacunas, 0, tamvet);

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", lacunas[i]);
    }
    return 0;
}