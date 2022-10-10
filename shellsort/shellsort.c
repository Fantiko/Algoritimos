#include <stdio.h>
#include <stdlib.h>

void shellsort(int *vet, int size)
{
    int i, j, valor;

    int h = 1;
    while (h <= size)
    {
        h = 3 * h + 1;
    }

    while (h > 0)
    {
        
        for (i = h; i < size; i++)
        {

            valor = vet[i];
            j = i;

            while (j > h - 1 && valor <= vet[j - h])
            {
                vet[j] = vet[j - h];
                j = j - h;
            }

            vet[j] = valor;
        }

        h = h / 3;
    }
}

void main()
{
    int lacunas[] = { 701 , 301 , 132 , 57 , 23 , 10 , 4 , 1 };
    shellsort(&lacunas, 8);

    for (int i = 0; i < 8; i++)
    {
        printf("%d", &lacunas[i]);
    }
    



}
