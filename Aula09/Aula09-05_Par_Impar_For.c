#include <stdio.h>
/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
08/09/2025
Par e Ímpar com "For"
*/

int main(){
    int V;
    printf("Insira um valor: ");
    scanf("%d",&V);
    printf("Os numeros pares sao: ");
    for(int C=0; C<=V; C++){
        if(C%2==0){
        printf("\n%d",C);
        }
    }
    printf("\nOs numeros impares sao: ");
    for(int C=0; C<=V; C++){
        if(C%2!=0){
        printf("\n%d",C);
        }
    }

    return 0;
}