/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
03/11/2025
Inversão da String Recursiva
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

char* inversao(char palavra){
    
    if(palavra == \0) return;

    return inversao(((palavra - palavra[0])+(palavra[0])));
}

int main(){
    system("chcp 65001 > null");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    printf("%c", inversao(palavra));

}