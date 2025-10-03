/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
02/10/2025
Strings
*/

#include <stdio.h>

int main(){

    char nome[30]; //"[30]" determina a quantidade de caracteres
    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("O nome digitado foi %s.", nome);

    return 0;
}