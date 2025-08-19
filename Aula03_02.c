#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
18/08/2025
Soma
*/

int main (){
int A;
int B;
int C; 
int soma;

//Definição das variáveis

    printf("Digite o valor A:\n");
    scanf("%d",&A);

    printf("Digite o valor B:\n");
    scanf("%d",&B);

    printf("Digite o valor C:\n");
    scanf("%d",&C);

soma = A + B + C;
//Saída do valor

    printf("A soma e %d\n", soma);
printf ("A posicao de memoria da soma e %d\n", &soma);

    return 0;
}