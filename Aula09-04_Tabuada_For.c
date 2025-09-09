#include <stdio.h>
/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
08/09/2025
Tabuada com "For"
*/

int main(){
    int V;
    printf("\nDigite o valor: ");
    scanf("%d",&V);
    printf("Tabuada de: %d",V);
    for(int C=0; C<=10; C++){
        printf("\n%d X %d = %d", V, C, V*C);
    }
}