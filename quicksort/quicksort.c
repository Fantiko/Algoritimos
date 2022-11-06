#include <stdio.h>
#include <stdlib.h>

#define tamvet 8

void particao(int *v, int left, int right, int *i, int *j)
{
    int pivo, temp, aux;
    pivo = v[(left + right) / 2];
    *i = left;
    *j = right;
    while (*i <= *j)
    {
        while (v[*i]<pivo && *i < right)
        {
            (*i)++;
        }
        while (v[*j] > pivo && *j > left)
        {
            (*j)--;
        }
        if (*i <= *j)
        {
            aux = v[*i];
            v[*i] = v[*j];
            v[*j] = aux;
            (*i)++;
            (*j)--;
        }
    }
}

void quicksort(int *v, int l, int r)
{
    int i, j;
    particao(v, l, r, &i, &j);
    if (j > l)
    {
        quicksort(v, l, j);
    }
    if (i < r)
    {
        quicksort(v, i, r);
    }
}

void main()
{
    int lacunas[] = {71, 30, 12, 57, 2, 10, 4, 1};
    quicksort(lacunas, 0, tamvet-1);

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", lacunas[i]);
    }
}
