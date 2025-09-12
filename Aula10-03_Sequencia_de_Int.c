#include <stdio.h>
/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
11/09/2025
Sequência de Inteiros
*/

int main(){
    int I, C=0,X=0,M=0;

    printf("Digite numeros inteiros ou digite 0 para encerrar:\n");

    while(I!=0){
    scanf("%d",&I);
    if(I>M){
        M=I;
    }
    X=I+X;
    C++;
    }
    printf("O redultado e:");
    printf("\n%d",C-1);
    printf("\n%d",M);
    printf("\n%d",X/(C-1));

    return 0;
}