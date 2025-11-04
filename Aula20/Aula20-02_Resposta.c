/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
30/10/2025
Inversão da String Recursiva
*/

#include <stdio.h>
#include <locale.h>

void inverter(char *str){
    if(*str == '\0') 
        return;

    inverter(str +1);
    putchar(*str);
}

int main(){
    system("chcp 65001 > null");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    inverter(palavra);
    return 0;
}