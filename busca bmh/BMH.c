#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10 
#define N 4


int BMH(char *t, char *p){
    int n =strlen(t);
    int m = strlen(m);
    int k, j;
    int tabela[255];

    //pre-processamento
    for (int j = 0; j < 255; j++)
    {
        tabela[j] = m;
    }

    for (int j = 1; j < m ; j++)
    {
        tabela[p[j-1]] = m-j;
    }
    int i = m;
    //busca
    while (i<=n)
    {
        k = i;
        j = m;
        while (t[k-1]==p[j-1] && j>0)
        {
            k--;
            j--;
        }
        if (j==0)
        {
            return k+1;
        }
        i=i+tabela[t[i-1]];




    }
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