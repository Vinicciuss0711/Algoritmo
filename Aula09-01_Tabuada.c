#include <stdio.h>
/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
08/09/2025
Tabuada
*/

int main(){
    int C=0, V; // C = Contador e V = Valor
    //Entrada
    printf("Entre com um numero: ");
    scanf("%d",&V);
    //Processamento e saída
    printf("Tabuada de %d\n",V);
    while (C<=10){
        printf("%d X %d = %d\n", V, C, V*C);
        //contador = contador + 1
        C++;
    }
    return 0;    
}