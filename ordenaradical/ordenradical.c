#include <stdio.h>
#include <stdlib.h>

int pot(int num,int exp){
    int ret;
    ret = 1 ;
    for (int i = 0; i < exp; i++)
    {
        ret = ret*num;
    }
    return ret;
}

int pegaDigito(int numero, int pos){
    int digito;
    for (int i = 0; i < pos; i++)
    {
        digito = numero % (pot(10,i+1));
        numero = numero - digito * pot(10,i);
    }
    return digito;
}



void main(){
printf("%d\n", pegaDigito(324,0));
printf("%d\n", pegaDigito(324,1));
printf("%d\n", pegaDigito(324,2));
}