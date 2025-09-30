/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
29/09/2025
Peso do Peixe
*/

#include <stdio.h>

int main(){
    float peso, excesso=50, multa;

    printf("Digite o peso de peixes em quilos: ");
    scanf("%f",&peso);

    if(peso>50){
        printf("O peso excede em: %f", peso-excesso);
        multa = (peso-excesso)*4;
        printf("\nA multa sera de %0.2f reais.",multa);
    }





    return 0;
}