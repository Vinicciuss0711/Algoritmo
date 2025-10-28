/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
27/10/2025
Função
*/

#include <stdio.h>
#include <locale.h>

void dobrarValorSemRetorno(int n) {
    n = n * 2;
    printf("Dentro da funcao: %d\n", n);
}

int dobrarValorComRetorno(int n) {
    n = n * 2;
    return n;
}

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x = 5;
    dobrarValorComRetorno(x);
    printf("Fora da função: %d\n", x);
    printf("Valor retornado da função é %d\n", dobrarValorComRetorno(x));
    return 0;
}