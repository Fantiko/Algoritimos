#include<stdio.h>
#include<stdlib.h>

int forcaBruta(char *v, int n, char *p, int m){
    int j;
    for (int i = 0; i < n-m; i++)
    {
        j = 0;
        while (j<m && v[i+j] == p[j])
        {
            j= j + 1;
            if(j == m){
                return i;
            }
        }
        
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

    int resp = forcaBruta(v,11,n,6);

    printf("%d",resp);
}