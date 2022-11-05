#include <stdio.h>
#include <stdlib.h>

void shellsort(int *vet, int size)
{
    int i, j, aux;

    int h = 1;
    while (h <= size)
    {
        h = 3 * h + 1;
    }

    while (h > 1)
    {
        h = h / 3;

        for (i = h; i < size; i++)
        {
            aux = vet[i];
            j = i - h;

            while (j >= 0  && aux <= vet[j])
            {
                vet[j+h] = vet[j];
                j = j - h;
            }

            vet[j + h] = aux;
        }

        
    }
}

void main()
{
    int lacunas[] = { 701 , 301 , 132 , 57 , 23 , 10 , 4 , 1 };
    shellsort(lacunas, 8);

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", lacunas[i]);
    }
    



}
