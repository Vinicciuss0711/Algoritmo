/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
30/10/2025
Potenciação Recursiva
*/

#include <stdio.h>
#include <locale.h>

int Potenciacao(int expoente, int base){
    if (expoente == 0) return 1;

    return base * Potenciacao(expoente - 1, base);
}

int main(void){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int expoente, base;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("%d", Potenciacao(expoente, base));

    return 0;
}