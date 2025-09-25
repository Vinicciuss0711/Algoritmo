#include <stdio.h>
/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
11/09/2025
Divisores de um Número
*/

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for(int c=n; c>0; c--){ //"c--" = "c=c-1"
        if(n%c==0){
            printf("\n%d", n/c);
        }
    }
    return 0;
}