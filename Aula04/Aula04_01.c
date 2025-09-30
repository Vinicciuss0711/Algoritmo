#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
21/08/2025
Média
*/

float main (){
float A,B,C;
float resultado;

//Definição das variáveis

    printf("Digite o valor A:\n");
    scanf("%f",&A);

    printf("Digite o valor B:\n");
    scanf("%f",&B);

    printf("Digite o valor C:\n");
    scanf("%f",&C);

resultado = (A + B + C)/3;
//Saída do valor

    printf("O resultado da media e %f\n", resultado);
printf ("A posicao de memoria do resultado e %f\n", &resultado);

    return 0;
}