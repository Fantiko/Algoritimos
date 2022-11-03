#include<stdio.h>
#include<stdlib.h>
#define MAX 10 
#define N 4


int prefixo(char *p,int m){
    int i = 1;
    int j = -1;
    int *aux = malloc(sizeof(int)* m);
    if (!aux)
    {
        return NULL;
    }

    aux[0] = j;

    for (i = 1; i < m-1; i++)
    {
        while (j > -1 && p[j+1] != p[i])
        {
            j = aux[j];
        }

        if (p[i] == p[j+1])
        {
            j++;
        }
        
        aux[i] = j;
        
    }
    
    return aux;

}

int busca_KMP(char *t, int n, char *p, int m){
    int *aux = prefixo(p, m);
    int i;
    int k = -1;
    if (!aux)
    {
        return -1;
    }
    for ( i = 0; i < n; i++)
    {
        while (k > -1 && p[k+1] != t[i])
        {
            k=aux[k];
        }
        if (t[i] == p[k+1])
        {
            k++;
        }
        if (k == m-1)
        {
            free(aux);
            return i - k;
        }
    }
    free(aux);
    return -1;
}



void main(){
    char v[11];
    char n[6];

    printf("digite o texto que deseja armazenar (11 letras): ");
    setbuf(stdin,NULL);
    scanf("%[^\n]",v);
    setbuf(stdin,NULL);
    printf("digite o texto que deseja buscar dentro do texto (6 letras): ");
    scanf("%[^\n]",n);
    setbuf(stdin,NULL);

    int resp = busca_KMP(v,11,n,6);

    printf("%d",resp);

}