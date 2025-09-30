#include <stdio.h>
/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
04/09/2025
Do and While
*/

int main(){

    int N;
    float A, B;

    do{
        printf("Digite a nota A: ");
        scanf("%f",&A);

        printf("Digite a nota B: ");
        scanf("%f",&B);

        printf("A media das notas e: %f\n",(A+B)/2);

        printf("Deseja calcular novamente?\n");
        printf("Digite 1 para continuar |OU| Digite 0 para encerrar\n");
        scanf("%d",&N);

    }while(N==1);

}