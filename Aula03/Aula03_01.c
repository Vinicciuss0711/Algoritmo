#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
18/08/2025
Idade
*/

int main (){
    
    int idade; //Definição de variável
    printf("Digite a sua idade:");
    scanf("%d",&idade);
//Saída do valor
    printf("Sua idade e %d\n", idade);
printf("Minha posicao de memoria e %d\n", &idade);
    return 0;
}